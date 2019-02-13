/* Program to convert kilometer into meter.(using reading data from console(scanf)
SUMIT KUMAR            */
#include<stdio.h>
int main(void)
{
	float km,meter;
	printf("\n Enter the  Length in kilometer :");
	scanf("%f",&km);                                /*reading a floating number */
	meter=km*1000;
	printf("\m\t The Length in meter is :%f",meter);
	return 0;
	
}


/* OUTPUT: Enter the Length in kilometer :26
           The Length in meter is :26000.000000  */
