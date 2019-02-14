/*  Write a program to check whether a triangle is valid or not, when the three angles of the triangle are entered through the keyboard.
A triangle is valid if the sum of all the three angles is equal to 180 degrees.
 SUMIT KUMAR      */
 
 #include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	
	printf("Enter the angles of a triangle in degrees : ");
	scanf("%d%d%d", &a,&b,&c);
	
	if(a+b+c == 180)
		printf("The triangle is valid");
	else
		printf("The triangle is not valid.");
		
	getch();
	return 0;
}
