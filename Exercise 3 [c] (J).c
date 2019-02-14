/* Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.

SUMIT KUMAR       */

#include<stdio.h>
#include<conio.h>
int main()
{
	int x1,x2,x3,y1,y2,y3,ar;
	
	printf("Enter x-y coordinates of first point : ");
	scanf("%f%f", &x1,&y1);
	
	printf("\nEnter x-y coordinates of second point : ");
	scanf("%f%f", &x2,&y2);
	
	printf("\nEnter x-y coordinates of third point : ");
	scanf("%f%f", &x3,&y3);
	
	ar= (x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2));      //condition for collinear
	
	if(!ar)
		printf("\n\nThe points are collinear.");
	else
		printf("\n\nThe points are not collinear.");
	
	//To check there's is an example (0, -2) , (2, 4) and (-1, -5).
		
	getch();
	return 0;
}
