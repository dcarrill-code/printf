# Printf

Recreate the C library printf

![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/228/printf.png)

## Requirements:

-   Files should be compiled with gcc 4.8.4
-   No more than 5 functions per file
-   Files should end with a new line
-   No global variables allowed


## Content

This proyect has three branches: main, dcarrill-code and yessbertel.  **main** contains the final files and  **dcarrill-code** and **yessbertel** contains the test of the use cases.

## Files

- **_printf.c**: function that produces an output according to a format
- **holberton.h**: header file that contains prototypes for all the functions.
- **man_3_printf**:  custom man page (Create a man page for your function).
- **mandatory0.c**: file containing funtions to print char, string and percentage.
- **mandatory1.c**: file containing funtions to print numbers, decimals and intergers.
- **_putchar.c**: function to write a char to standard output.

## Format Specifiers

-**funtion print_char**: prints a character and his format specifier is %c
-**funtion print_string**: prints a character and his format specifier is %s
-**funtion print_prtg**: prints a percentage and his format specifier is %%
-**funtion print_dec**: prints decimals and integers and his format specifier is %d %i

## Usage

-   Includes  `holberton.h`
-   Calls the function:  `_printf`  passed in a string with optional arguments
-   Use format specifiers for desired output
-   Function returns  `-1`  upon error and  `(null)`  if a string argument is  `NULL`

## Example Usage
`_printf("Let's try to printf a simple sentence.\n");` *prints "Let's try to printf a simple sentence." followed by a new line.*
`_printf("Negative:[%d]\n", -762534);` *prints "Negative:[-762534]".*

## About

This project was created by Team VI -  [Yessica Bertel](https://www.instagram.com/yessbertel/)  and  [Dickson Carrillo](https://github.com/dcarrill-code).
