/* Program to do operations over bit wise logical operators  
SUMIT KUMAR				*/

#include<stdio.h>
int main(void)
{
	int a,b,c;
	a=12;
	b=19;
	c=(a&b);
	printf("c=%d\n",c);
	c=(a|b);
	printf("c=%d\n",c);
	c=(a^b);
	printf("c=%d\n",c);
	c=~a;
	printf("c=%d\n",c);
	c=~b;
	printf("c=%d\n",c);
	c=(a>>3);
	printf("c=%d\n",c);c=(a>4 && b>a);
	c=(a<<4);
	printf("c=%d\n",c);
	c=(a>b) ? a:b;
	printf("c=%d\n",c);
	return 0;
}
