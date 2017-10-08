# Lab Exercise 1: Introduction to C, Git, and the MSP430
## Veronica Williams, October 8, 2017, Code Last Updated: October 9, 2017


## Math Library for the MSP430
The studio.h header file, which stands for standard input output header, defines the core input and output functions that the compiler will use in order to properly run the code. 

##Dependencies
Other than the stdio.h header file, math.c only needs math.h in the same working directory as your project in order to function.

## Usage
After including the math.h and math.c in the same working directory as your project, you need to simply call the following function to perform the required operation:
Math(int x, int y, char operator);

## Valid Inputs

Int x, int y

16-bit signed integers

char operator

char which is valid for the following values [‘+’,’-‘,’*’,’/’,’%’]. Math() will print that the operation is not supported if the input is invalid. 

## Functions

### Add(char = ‘+’)
Int x will be added to int y and the function will print the sum as signed integer. 
Example (10 +15)
Math(10,15,’+’)

### Subtract(char=’-‘)
Int x will be subtracted from int y and the function will print the difference as a signed integer
Example(10-15)
Math(10,15,’-‘)

### Multiply(char=’*’)
Int x will be multiplied by int y and the function will print the product as a signed integer
Example(10*15)
Math(10,15,’*’)

### Divide(char=’/’)
Int x will be divided by int y and the function will print the quotient as an integer
Example(10/15)
Math(10,15,’/’)

### Modulus(char=’%’)
Int x will be taken mod int y and the function will print the remainder as a signed integer
Example(10%15)
Math(10,15,’%’)

## Known Errors

There are no known errors at the current time. 

Tasks

1.	 Implement basic add, subtract, multiply, divide, modulus functions





