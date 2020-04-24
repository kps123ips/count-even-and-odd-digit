#include<stdio.h>
int main()
{
	int n,ce=0,co=0,digit;
	printf("Enter Number");
	scanf("%d",&n);
	while(n>0)
	{
		digit=n%10;
		if(digit%2==0)
		ce++;
		else
		co++;
		n=n/10;
	}
	printf("\nEven Digit %d",ce);
	printf("\nOdd Digit %d",co);
	getch();
}
