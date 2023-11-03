#include "KB_ButtonPressed.h"

uint16_t ButtonPinMode(uint8_t button_pin)
{
	if (button_pin >= NUM_DIGITAL_PINS)
	{
		return (-1);
	}
	uint8_t bit = digitalPinToBitMask(button_pin);
	uint8_t port = digitalPinToPort(button_pin);
	volatile uint32_t *reg = portModeRegister(port);
	if (*reg & bit)
	{
		return (OUTPUT);
	}
	volatile uint32_t *out = portOutputRegister(port);
	return ((*out & bit) ? INPUT_PULLUP : INPUT);
}

uint16_t ButtonPressed(uint8_t button_pin)
{	
	ButtonPinMode(button_pin);
	if (button_pin != INPUT)
	{
		pinMode(button_pin, INPUT);
	}
	static uint16_t buttonLastState = 0;
	uint8_t buttonState = digitalRead(button_pin);
	if (buttonState != ((buttonLastState >> button_pin) & 1))
	{
		buttonLastState ^= 1 << button_pin;
		return buttonState == HIGH;
	}
	return false;
}