/* Program to do operations over conditional Operators.
SUMIT KUMAR    */

#include<stdio.h>
int main(void)
{
	int a,b,c;
	a=12;
	b=19;
	c=(a>b);
	printf("c=%d\n",c);
	c=(a>=b);
	printf("c=%d\n",c);
	c=(a<b);
	printf("c=%d\n",c);
	c=(a<=b);
	printf("c=%d\n",c);
	c=(a==b);
	printf("c=%d\n",c);
	c=(a!=b);
	printf("c=%d\n",c);c=(a>4 && b>a);
	c=(a>4 || b>a);
	printf("c=%d\n",c);
	return 0;
}
