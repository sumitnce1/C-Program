/* Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).

SUMIT KUMAR           */

#include<stdio.h>
#include<conio.h>
int main()
{
	float x,y;
	
	printf("Enter the x-y coordinates of the point : ");
	scanf("%f%f", &x,&y);
	
	if(x==0 && y==0)
		printf("\n\The point is on the origin.");
	if(x==0 && y!=0)
		printf("\n\The point lie on the y-axis");
	if(x!=0 && y==0)
		printf("\n\The points lie on the x-axis");
	if(x!=0 && y!=0)
		printf("\n\The points lie on the plane");
		
	getch();
	return 0;
}
