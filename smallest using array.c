/* Program to fin the smallest among N elements with out using array.
SUMIT KUMAR       */
#include<stdio.h>
int main(void){
	int n,number,i,small;
	printf("\n Enter the value of N: ");;
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&number);
		if(small>number)
		small=number;
		
	}
	printf("\n The smallest element is %d",small);
	return 0;
	
	
}

