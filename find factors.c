/* Program to find the factors of a given number.
SUMIT KUMAR       */

#include<stdio.h>
int main(void)
{
	int i,n;
	printf("\n Enter the number to find the factor: ");
	scanf("%d", &n);
	printf("\n Thgr factors of the number %d is:",n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		printf("%d ",i);
		
	}
	return 0;
}
