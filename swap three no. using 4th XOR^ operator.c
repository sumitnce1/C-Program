/* Program to swap three numbers without using fourth variable (usinbg XOR(^) operator
SUMIT KUMAR     */
#include<stdio.h>
int main(void)
{
	int a,b,c,temp;
	printf("\nEnter the of a,b and c:");
	scanf("%d%d%d",&a,&b,&c);
	printf("\nBefore swap the value of  a=%d, b=%d and c=%d",a,b,c);
	a=a^b^c;
	b=a^b^c;
	c=a^b^c;
	a=a^b^c;
	printf("\nAfter swap the value of a=%d, b=%d and c=%d", a,b,c);
	return 0;
}

