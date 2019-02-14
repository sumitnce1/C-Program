/* Any year is input through the keyboard. Write a program to determine whether the year is a leep year or not. 
SUMIT KUMAR   */

#include<stdio.h>
#include<conio.h>
int main()
{
	int year;
	
	printf("Enter an year : ");
	scanf("%d", &year);
	
	if(year%4 != 0)                              //not a leap year
		printf("\n\n%d is not a leap year", year);
	else                                         //leap year
		printf("\n\n%d is a leap year.", year);
		
	getch();
	return 0;
}
