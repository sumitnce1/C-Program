/* Program to a number is even or odd
          */
#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("\nEnter a number :");
	scanf("%d", &num);
	if (num%2==0)
	printf("\nThe %d is even.",num);
	else
	printf("\nThe %d is odd.",num);
	return 0;
}
