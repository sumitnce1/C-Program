/* Program is to print the prime numbers from 2 to N
SUMIT KUMAR       */
#include<stdio.h>
int main(void){
	int j,i,flag,n;
	printf("\nEnter Value of N:");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		flag=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
				
			}
		}
		if(flag==0)
		printf("%d",i);
		
	}
	return 0;
}
