/*. Program to find the largest and second largest of three numbers
SUMIT KUMAR.        */

#include<stdio.h>
#define BIG (a,b) ((a>b)? (a): (b))
#define SAM (a,b) ((a<b)? (a):(b))
int main(void)
{
int n,m,o,lar,sma,seclar;
printf("Enter the three numbers : ");
scanf("%d%d%d",&n,&m,&o);
lar= BIG((BIG(n,m)),o);
sma= SAM((SAM(n,m)),o);
seclar=(n+m+o)-(lar+sma);
printf("Largest of three numbers is %d\n",lar);
printf("Second Largest of three numbers is %d",seclar);
return 0;

}
