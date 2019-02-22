/* Program to print even numbers upto a range and find the average
SUMIT KUMAR     */
#include<stdio.h>
int main(void)
{
	 int number,i=0,sum=0,n=0;
	 float avg=0;
	 printf("\nEnter a number to print even numbers and find the average upto range: ");
	 scanf("%d",&number);
	 printf("\n\t EVEN");
	 while(i<=number)
	 {
	 	if(i%2==0)
	 	{
	 		sum+=i;
	 		printf("\n\t %d",i);
	 		n++;
		 }
		 i++;
	 }
	 avg=sum/n;
	 printf("\n\t The sum of  %d even number is:%d",n,sum);
	 printf("\n\t The avg of %d even number is: %f,n,avg");
	 return 0;
}
