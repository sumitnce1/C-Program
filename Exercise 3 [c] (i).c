/* Given the length and breadth of a rectangle, write a program to find whether
the area of the rectangle is greater than its perimeter. For example,
the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter.

SUMIT KUMAR         */

#include<stdio.h>
#include<conio.h>
int main()
{
	float a,b, area, peri;
	
	printf("Enter the length and breadth of the rectangle : ");
	scanf("%f%f", &a,&b);
	
	area = a*b;
	peri = 2*a + 2*b;
	
	if(area > peri)
		printf("\nThe area %f of the rectangle is greater than it's perimenter %f.", area,peri);
	else
		printf("\nThe area %f of the rectangle is less than it's perimenter %f.", area,peri);
		
	getch();
	return 0;
}
