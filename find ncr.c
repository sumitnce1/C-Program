/* Program is to find the nCr
SUMIT KUMAR      */

#include<stdio.h>
int main(void)
{
	int n,r,i,ncr,nfact,n_rfact,rfact;
	printf("Enter n and r values");
	scanf("%d %d",&n,&r);
	if(n<r)
	printf("\nInvalid input");
	else
	{
		if(n==r)
		ncr=1;
		else
		{
			nfact=1;
			n_rfact=1;
			rfact=1;
			for(i=1;i<n;i++)
			nfact*=i;
			for(i=1;i<=n-r;i++)
			n_rfact*=i;
			
			for(i=1;i<=r;i++)
			rfact*=i;
			ncr=nfact/(n_rfact*rfact);
		
		}
		printf("\n Factorial of %d = %d", n,nfact);
		printf("\n Factorial of %d = %d", r,rfact);
		printf("\n %dC%d=%d",n,r,ncr);
		
	}
	return 0;
}
