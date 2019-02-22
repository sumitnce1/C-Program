/* Program is to find the factorial of a given number  
SUMIT KUMAR          */
#include<stdio.h>
int main(void)
{
int number,i;
long factorial=1;
printf("\n\t Enter a number to the factorial: ");
scanf("%d", &number);
if(number==0 || number<0)
 printf("\n\n The factorial of %d is: %d",number,1);
 else
 for(i=1;i<=number;i++)
 factorial *=i;
 printf("\n\t The factorial of the number %d is %ld",number,factorial);
 return 0;
 }
