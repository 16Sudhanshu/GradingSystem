#include<stdio.h>
void main()
{
	int a,x;
	printf("Enter an integer: ");
	scanf("%d",&a);
	x=sum(a);
	printf("Sum of digits of %d is %d.",a,x);
}
sum(int a)
{
	int b,x;
	if(a==0)
	x=0;
	else
	{
		b=a%10;
		a=a/10;
		x=sum(a)+b;
	}
	return x;
}
