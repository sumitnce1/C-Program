/* Program is to a given number is prime or not
SUMIT KUMAR    */
#include<stdio.h>
#include<math.h>
int main(void)
{
	int n,i,flag;
	printf("Enter a number");
	scanf("%d",&n);
	printf("\nEnter a numbers: ");
	flag=0;
	for(i=2;i<sqrt(n);i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	 printf("\n The number %d is prime",n);
	 else
	 printf("\n The number %d is not prime",n);
	 return 0;
}
