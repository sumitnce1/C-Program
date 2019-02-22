/* Program to print the TWin Prime numbers upto a range (twin prime means if the difference of two prime number is 2
 Example: 3-5, 5-7, 11-13, 17-19 etc.
 SUMIT KUMAR                            */
 
 #include<stdio.h>
 int main(void)
 {
 	int n,j,i,flag,p=0;
 	int a[100];
 	printf("\n Enter the value of N: ");
 	scanf("%d",&n);
 	for(i=2;i<=n;i++)
 	{
 		flag=0;
 		for(j=2;j<=i/2;j++)
 		{
 			if(i%j==0)
 			{
 				flag=1;
 				break;
			 }
		 }                       /* end of jth loop  */
		 if(flag==0)
		 a[p++]=i;
	 }                          /* end of ith loop */
	 for(j=0;j<=p-1;j++);          /* check for twin prime  */
	 {
	 	if(a[j+1]-a[j]==2)
	 	{
	 		printf("\m\t The %d And %d are Twin Prime numbers " ,a[j],a[j+1]);
		 }
	 }
	 return 0;
 }
