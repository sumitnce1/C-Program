/* Program to find the Area of triangle using  hero's formula

hero's Formula   s2=s*(s-a)*(s-b)*(s-c)     
SUMIT KUMAR          */

#include<stdio.h>
#include<math.h>
int main(void)
{
	float s,a,b,c,A;
	printf("\nEnter the three sides of a Traiangl a,b & c: ");
	scanf("%f%f%f", &a,&b,&c);
	s=(a+b+c)/2;
	A=sqrt(s=s*(s-a)*(s-b)*(s-c));
	printf("\n The area of the triangle is : %.2f",A);
	return 0;
	
}
