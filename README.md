## Overview

Very simple Arduino library, for all architectures, to generic detect if any button is pressed.<br>

Included function, if any button pin is not set to INPUT, do will it itself.<br>

## Example

1. include library
```c++
#include <KB_ButtonPressed.h>
```

2. define buttons pin
```c++
byte buttonPin_1 = 26;
```

3. use library function
```c++
if(ButtonPressed(buttonPin_1))
{
	// your code after button pressed
}
```

Return HIGH if is button pressed.<br>
