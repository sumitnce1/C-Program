/* Program to print odd and even numbers upto a range.
SUMIT KUMAR      */
#include<stdio.h>
int main(void)
{
	int number,i=0;
	printf("\n Enter a number to print the odd and even numbers upto that range: ");
	scanf("%d",&number);
	printf("\n\t ODD \t\t EVEN");
	while(i<=number)
	{
		if(i%2==0)
		printf("\n\t %d",i);
		else
		printf("\t\t %d",i);
		i++;
	}
	return 0;
}
