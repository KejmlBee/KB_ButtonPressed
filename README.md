# Overview

Very simple Arduino library to generic detect if any button is pressed.<br>

Included function, if any button pin is not set to INPUT, do will it itself.<br>

## Example

- include library

`#include <KB_ButtonPressed.h>`

- define buttons pin

`byte buttonPin_1 = 26;

void setup()
{
	Serial.begin(9600);
}

void loop()
{`

- use library function

`if(ButtonPressed(buttonPin_1))`
`{`
`	Serial.print("Button 1");`
`}`
`}`