/* According to the Gregorian calendar, it was Monday on the date 01/01/1900. If any year is input through the keyboard
 write a program to find out what is the day on 1st January of this year.
 SUMIT KUMAR 													*/
 
#include<stdio.h>
#include<conio.h>
int main()
{
	int yer,a, day = 0;
	
	printf("Enter a year : ");
	scanf("%d", &yer);
	
	//Counting total number of days
	for(a = 1; a < yer; a++)
	{
		if(a % 4 == 0)//366 days if a leap year
			day = day + 366;
		else
			day = day + 365;
	}
	
	day = day % 7;
	
	if(day == 1)
		printf("It'll be monday on 01/01/%d", yer);
	if(day == 2)
		printf("It'll be tuesday on 01/01/%d", yer);
	if(day == 3)
		printf("It'll be wednesday on 01/01/%d", yer);
	if(day == 4)
		printf("It'll be thursday on 01/01/%d", yer);
	if(day == 5)
		printf("It'll be friday on 01/01/%d", yer);
	if(day == 6)
		printf("It'll be saturday on 01/01/%d", yer);
	if(day == 0)
		printf("It'll be sunday on 01/01/%d", yer);
		
	getch();
	return 0;
}
