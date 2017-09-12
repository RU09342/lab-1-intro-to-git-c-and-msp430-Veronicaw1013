#include<stdio.h>
int math(int x,int y, char op)
{
if (op == '+')
{
int z;
z=x+y;
printf("Your answer is : %d",z);
return 0;
}
else if (op == '-')
{ int z;
z=x-y;
printf("Your answer is : %d",z);
return 0;
}
else if (op == '*')
{ int z;
z=x*y;
printf("Your answer is : %d",z);
return 0;
}
else if (op == '/')
{ int z;
z=x/y;
printf("Your answer is : %d",z);
return 0;
}
else if (op == '%')
{ int z;
z=x%y;
printf("Your answer is : %d",z);
return 0;
}
}
void main()
{
math(2,3,'+');
math(6,7,'-');
math(6,7,'*');
math(12,7,'/');
math(12,7,'%');

}