/* While Purchasing certain items, a discount of 10% is offered if the quantity
 purchased is more than 1000. if quantity and price per item input through 
 the keyboard, write a program to claculate the total expenses.      */
 
 #include<stdio.h>
 int main()
 {
 	int qty, dis;
 	float rate, tot;
 	printf("Enter quantity and rate:");
 	scanf("%d%f", &qty, &rate);
 	if(qty>1000)
 	dis=10;
 	else
 	dis=0;
 	tot=(qty*rate)-(qty*rate*dis/100);
 	printf("Total expenses= Rs.%f\n",tot);
 	return 0;
 }
 
 /* OUTPUT: Enter quantity and rate: 1200 15.50
            Total expenses= Rs.16740.000000 */
 
 
