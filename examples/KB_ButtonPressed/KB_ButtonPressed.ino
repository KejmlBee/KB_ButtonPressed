#include <KB_ButtonPressed.h>

byte buttonPin_1 = 26;
byte buttonPin_2 = 25;
byte buttonPin_3 = 17;
byte buttonPin_4 = 16;

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

