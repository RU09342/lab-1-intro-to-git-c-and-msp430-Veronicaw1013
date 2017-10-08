#include<stdio.h>				//call functions in stdio.h
#include<math.h>				//call functions in math.h
int math(int x,int y, char op)  // create function "math" that takes in three inputs
								// two integers "x" and "y", and a character "op"
{
if (op == '+')				    //If the operation is addition, run this loop
{
int z;							//set "z" as an integer
z=x+y;							//add "x" and "y" and set "z" equal to it
printf("Your answer is : %d",z);//print the solution 
return 0;						//exit code
}
else if (op == '-')				//If the operation is subtraction, run this loop
{ int z;					    //set "z" as an integer
z=x-y;							//subtract "x" and "y" and set "z" equal to it
printf("Your answer is : %d",z);//print the solution 
return 0;						//exit code
}
else if (op == '*')				//If the operation is multiplication, run this loop
{ int z;						//set "z" as an integer
z=x*y;							//multiply "x" and "y" and set "z" equal to it
printf("Your answer is : %d",z);//print the solution 
return 0;						//exit code
}
else if (op == '/')				//If the operation is division, run this loop
{ int z;						//set "z" as an integer
z=x/y;							//multiply "x" and "y" and set "z" equal to it
printf("Your answer is : %d",z);//print the solution 
return 0;						//exit code
}
else if (op == '%')				//If the operation is modulus, run this loop
{ int z;						//set "z" as an integer
z=x%y;							//modulus "x" and "y" and set "z" equal to it
printf("Your answer is : %d",z);//print the solution 
return 0;						//exit code
}
else 
	printf("This operation is not supported"); //If the operation is something other than
											   //what is supported, print that the operation
											   //is not supported
return 0;									   // exit code
}
void main()									   //main function
{
math(2,3,'+');								   //Lines 44-49 run through the code using
math(6,7,'-');								   // different "x" and "y" values as well
math(6,7,'*');								   // as operations
math(12,7,'/');
math(12,7,'%');
math(12,3,'#');

}