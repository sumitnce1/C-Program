/* A company insures its drivers in the following cases:
- If the driver is married.
- If the driver is unmarried, male & above 30 years of age.
- If the driver is unmarried, female & above 25 years of age.
In all other cases the driver is not insured. If the marital status, sex and age of the driver are the inputs,
write a program to determine whether the driver is to be insured or not.    
 SUMIT KUMAR            */
 

/* Insurance of driver - without using logical operators */
#include<stdio.h>
int main( )
{
char sex, ms ;
int age ;
printf ("Enter age, sex, marital status ");
scanf ("%d %c %c", &age, &sex, &ms);
if ( ms == 'M' )
printf ("Driver should be insured");
else
{
if (sex =='M')
 {
	if (age>30)
  printf ("Driver should be insured");
 else
   printf ("Driver should not be insured");
 }
else
  {
    if (age > 25 )
       printf ("Driver should be insured");
    else
       printf ("Driver should not be insured");
     }
}
return 0;
}

/*

/* /* Insurance of driver - using logical operators

#include<stdio.h>
int main( )
{
char sex, ms ;
int age ;
printf ( "Enter age, sex, marital status " ) ;
scanf ( "%d %c %c" &age, &sex, &ms ) ;
if ( ( ms == 'M') || ( ms == 'U' && sex == 'M' && age > 30 ) ||
( ms == 'U' && sex == 'F' && age > 25 ) )
printf ( "Driver should be insured" ) ;
else
printf ( "Driver should not be insured" ) ;
return 0;
}
  */


