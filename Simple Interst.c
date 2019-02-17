/* Program to find the simple interest  
SUMIT KUMAR    */

	#include<stdio.h>
	int main(void)
	{
		float time, rate, principal, interest, amount;
		printf("\n Endter the principal : ");
		scanf("%f", &principal);
		printf("\n Enter the time in years :");
		scanf("%f", &time);
		prinf("\n Enter the rate :");
		scanf("%f", &rate);
		interest= principal*time*rate/100;
		amount=principal=interest;
		printf("\n\t Principal \tTime \tRate \tInterset \tAmount ");
		printf("\n\n\t %.2f \t%.2f \t%.2f \t%2f \t%.2f ", principal,time,rate,interest, amount);
		return 0;
		
	}
