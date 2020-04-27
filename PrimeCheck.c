#include<stdio.h>
void main()
{
	int n,c;
	printf("Enter your number: ");
	scanf("%d",&n);
	c=isprime(n,n/2);
	if(c==1)
	{
		printf("%d is a prime number.",n);
	}
	else
	{
		printf("%d is not a prime number.",n);
	}
}
isprime(int n,int i)
{
	if(i==1)
	{
		return 1;
	}
	else if(n%i==0)
	{
		return 0;
	}
	else
	{
		return isprime(n,i-1);
	}
}
