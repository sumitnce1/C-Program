/* Progrma to read pint form the user and print that point belongs to 1st or 2nd or 3rd or 4th quadrant
SUMIT KUMAR           */

#include<stdio.h>
int main(void)
{
	int x,y;
	printf("\nEnter x and y coorinate of 1st point: ");
	scanf("%d%d",&x,&y);
	if(x==0 && y==0)
	printf("point P(%d,%d) is at origin",x,y);
	if(x==0 && y!=0)
	printf("point P(%d,%d) is at y-axis",x,y);
	if(x!=0 && y==0)
	printf("point P(%d,%d) is at x-axis",x,y);
	if(x>0 && y>0)
	printf("point P(%d,%d) is at 1st Quardrant",x,y);
	if(x<0 && y>0)
	printf("point P(%d,%d) is at 2nd Quardrant",x,y);
	if(x<0 && y<0)
	printf("point P(%d,%d) is at 3rd Quardrant",x,y);
	if(x>0 && y<0)
	return 0;
}
