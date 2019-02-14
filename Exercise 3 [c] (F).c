/* If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.
SUMIT KUMAR       */

#include<stdio.h>
#include<conio.h>
int main()
{
	int ram,sam,ajy;
	
	printf("Enter the age of Ram, Shyam and Ajay respectively : ");
	scanf("%d%d%d", &ram,&sam,&ajy);
	
	if(ram<sam && ram<ajy)
		printf("\nRam is youngest among all.");
	else if(sam<ram && sam<ajy)
		printf("\nShyam is youngest among all.");
	else
		printf("\nAjay is youngest among all.");
		
	getch();
	return 0;
}
