#include<stdio.h>
int main()
{
	int a,b,r;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	r=lcm(a,b);
	printf("LCM of %d and %d is %d.",a,b,r);
}
lcm(int a,int b)
{
	static int c=1;
	if(c%a==0 && c%b==0)
	{
		return c;
	}
	c++;
	lcm(a,b);
	return c;
}
