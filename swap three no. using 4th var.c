/* Program to swap three numbers using fourth variable
SUMIT KUMAR     */
#include<stdio.h>
int main(void)
{
	int a,b,c,temp;
	printf("\nEnter the of a,b and c:");
	scanf("%d%d%d",&a,&b,&c);
	printf("\nBefore swap the value of  a=%d, b=%d and c=%d",a,b,c);
	temp=c;
	c=b;
	b=a;
	a=temp;
	printf("\nAfter swap the value of a=%d, b=%d and c=%d", a,b,c);
	return 0;
}
