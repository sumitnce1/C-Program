/*  Program to read two numbers from the user and print the biggest among them.
SUMIT KUMAR       */
#include<stdio.h>
int main(void)
{
	int a,b;
	printf("\nEnter the of a and b: ");
	scanf("%d%d",&a,&b);
	if(a>b)
	printf("\nThe number %d is Bigger.",a);
	else
	printf("\nThe number %d is Bigger.",b);
	return 0;
}
