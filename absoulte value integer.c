/* Program to find the absolute of an integer
SUMIT KUMAR      */
#include<stdio.h>
int main(void)
{
	int number;
	printf("\nEnter a number to find the absoulte value: ");
	scanf("%d",number);
	if(number<0)
	{
		 number=-number;
	}
	printf("\nThe absolute value of the given number is: %d",number);
	return 0;
}
