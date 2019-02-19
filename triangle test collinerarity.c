/* Program to read three points of a triangle and test for collinearity
SUMIT KUMAR      	*/
#include<stdio.h>
int main(void)
{
	int x1,y1,x2,y2,x3,y3;
	printf("\nEnter x and y coorinate of 1st point: ");
	scanf("%d%d",&x1,&y1);
	printf("\nEnter x and y coorinate of 2nd point: ");
	scanf("%d%d",&x2,&y2);
	printf("\nEnter x and y coorinate of 3rd point: ");
	scanf("%d%d",&x3,&y3);
	if(((x1*y2+x2*y3+x3*y1)-(y1*x2*+y2*x3+y3*x1))==0)
	printf("\nThe points are colliner.");
	else
	printf("\nThe points are not colliner.");
	return 0;
	
}
