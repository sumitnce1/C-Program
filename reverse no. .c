/* Program is find the reverse of a given number.
SUMIT KUMAR      */

#include<stdio.h>
int main(void)
{
	int num,dig;
	int rev=0;
	printf("\nEnter the number here: ");
	scanf("%d",&num);
	while(num>0)
	{
		dig=num%10;
		rev=rev*10+dig;
		num=num/10;
		
	}
	printf("\nThe reversed number is : %d",rev);
	return 0;
}
