/* Given the coordinates (x, y) of a center of a circle and it?s radius, write
a program which will determine whether a point lies inside the circle,
on the circle or outside the circle. (Hint: Use sqrt( ) and pow( ) functions)

SUMIT KUMAR              */

#include<stdio.h>
#include<conio.h>
int main()
{
	float r,x,y;
	
	printf("Enter the radius of the circle : ");
	scanf("%f", &r);
	
	printf("\nEnter the x-y coordinates of the point for checking it's position : ");
	scanf("%f%f", &x,&y);
	
	if(r > sqrt(pow(x,2) + pow(y,2)))
		printf("\n\nThe pints lie inside the circle.");
	else if(r == sqrt(pow(x,2) + pow(y,2)))
		printf("\nThe points lie on the circle.");
	else
		printf("\nThe points lie outside the circle.");
		
	getch();
	return 0;
}
