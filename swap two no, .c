/* Program to swap two numbers without using third variable (using bit wise XOR(^) operator)
SUMIT KUMAR           */

#include<stdio.h>
int main(void)
{
	int a,b;
	printf("\nEnter the of a and b: ");
	scanf("%d%d",&a,&b);
	printf("Before swap a=%d and b=%d\n", a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("After swap a=%d and b=%d\n",a,b);
	return 0;
}
