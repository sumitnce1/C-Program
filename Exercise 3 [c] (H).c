/* Write a program to find the absolute value of a number entered through the keyboard.
 SUMIT KUMAR */
 
 #include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	
	printf("Enter any number : ");
	scanf("%d", &a);
	
	if(a>0)
		printf("\n\%d is it's absolute value.", a);
	else
		printf("\n\%d is it's absolute number.", -1*a);
		
	getch();
	return 0;
}
