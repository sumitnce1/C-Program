/* Program to do operations over Operators

SUMIT KUMAR  */

#include<stdio.h>
int main(void)
{
	int a,b,c;
	a=2+(b=5);
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	a=b=c=5;
	printf("a=%D\nb=%d\nc=%d\n,a,b,c");
	c=a+b;
	printf("c=%d\n",c);
	c=a+b;
	printf("c=%d\n",c);
	{
		a=10;
		b=20;
		c=a+b;
		printf("vlaue ic c in side the block is =%d\n", c);
		
	}
	printf("vlaue ic c out side the block is=%d\n",c);
	a=2;
	b=4;
	c=(a,b);
	printf("c=%d\n",c);
	c=(b=7, a=5, a+b);
	printf("c=%d\n",c);
	return 0;
}
