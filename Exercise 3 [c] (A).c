/* if cost  price and selling price of ana item are input through the keyboard,
wirte a program to determine whether the seller has made profit or incurred loss.
 Also determine how much profit loss he made or loss he incurred.  */
 
 /* Calculate p0rofit or loss */
 #include<stdio.h>
 int main()
 {
	float sp,cp;
	
	printf("Enter the selling price and cost price of the item : ");
	scanf("%f%f", &sp, &cp);
	
	if(sp-cp>0)                                                            //profit condition
		printf("\n\nThe seller has gained profit of %f Rs.", sp-cp);
	else if(sp-cp<0)													   //loss condition
		printf("\n\nThe seller has incurred a loss of Rs.%f", cp-sp);
	else                                                                   //condition of no profit no loss
		printf("\n\nThe seller neither in profit nor in loss.");
	return 0;
}
