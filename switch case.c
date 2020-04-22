#include<stdio.h>
void main()
{
	int f;
	printf("To get the name and price of a food item press any no. from 1-5!\n");
	scanf("%d",&f);
	switch(f)
	{
		case 1:printf("Food item - Bread,\nPrice - Rs25/-");break;
		case 2:printf("Food item - Patanjali Noodles,\nPrice - Rs10/-");break;
		case 3:printf("Food item - Chocolate,\nPrice - Rs95/-");break;
		case 4:printf("Food item - Ice Cream,\nPrice - Free with any other food item");break;
		case 5:printf("Food item - Juice,\nPrice - Rs45/-");break;
		default:printf("Invalid input.");
	}
}
