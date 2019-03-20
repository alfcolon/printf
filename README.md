# _printf
A recreation of the function **printf** from the C standard library. 

## Motivation
This project exists in order to test our understanding of the programming concepts we've learned thus far during our time at Holberton. 

## Code Style
This project uses and complies to the [Betty](https://github.com/holbertonschool/Betty/wiki) code style.

## Usage
1. Include the `holberton.h` header file
2. Call the function `_printf()`, passing in a string (which may contain `%` format specifiers) as the first argument and, if format specifiers were included in that string, what you want those to be replaced with for the following arguments.
### Examples:
* `_printf("%s, %s &d, %d", "Tuesday", "March", 19, 2019);` *prints "Tuesday, March 19, 2019"*
* `_printf("Plan %c failed; here's Plan %c", 'A', 'B');` *prints "Plan A failed; here's Plan B"*
* `_printf("There are %b types of people in the world\n", 2)` *prints "There are 10 types of people in the world" followed by a new line*

## Credits
* [Alfredo Colon](https://github.com/alfredocol)
* [Julienne Tesoro](https://github.com/jmtes)
