#include<stdio.h>
void main()
{
	int marks;
	printf("Enter your marks:");
	scanf("%d",&marks);
	if(marks<=100 && marks>84)
	{
		printf("You got 'A Grade'.");
	}
	else if(marks<=84 && marks>69)
	{
		printf("You got 'B Grade'.");
	}
	else if(marks<=69 && marks>54)
	{
		printf("You got 'C Grade'.");
	}
	else if(marks<=54 && marks>39)
	{
		printf("You got 'D Grade'.");
	}
	else if(marks<40 && marks>=0)
	{
		printf("You got 'F Grade'.");
	}
	else
	{
		printf("Invalid input.");
	}
}
