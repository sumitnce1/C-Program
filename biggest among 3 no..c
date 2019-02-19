/* proram to find the biggest ammong 3 numbers.
SUMIT KUMAR       */
#include<stdio.h>
int main(void)
{
	int first,second,third,big;
	printf("\nEnter the first number: ");
	scanf("%d",&first);
	printf("\nEnter the second number: ");
	scanf("%d",&second);
	printf("\nEnter the third number: ");
	scanf("%d",&third);
	if (first>=second && first>=third)
	big=first;
	else if (second>=third)
	big=second;
	else
	big=third; 
	printf("\nThe biggest among three vlaues is ");
	printf("%d, %d, and %d \tBig=%d ", first,second,third,big);
	return 0;
}
