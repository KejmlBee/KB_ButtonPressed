#include <KB_ButtonPressed.h>

uint8_t buttonPin_1 = 26;
uint8_t buttonPin_2 = 25;
uint8_t buttonPin_3 = 17;
uint8_t buttonPin_4 = 16;

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	if(ButtonPressed(buttonPin_1))
	{
		Serial.print("Button 1");
	}
	
	if(ButtonPressed(buttonPin_2))
	{
		Serial.print("Button 2");
	}
	
	if(ButtonPressed(buttonPin_3))
	{
		Serial.print("Button 3");
	}
	
	if(ButtonPressed(buttonPin_4))
	{
		Serial.print("Button 4");
	}
}

