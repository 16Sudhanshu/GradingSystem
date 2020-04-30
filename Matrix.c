#include<stdio.h>
main()
{
	int i,j,mat[3][3],sum=0;
	printf("Enter elements of matrix : ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",(*(mat+i)+j));
		}
	}
	printf("The matrix is : ");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d ",*(*(mat+i)+j));
		}
	}
	for(i=0;i<3;i++)
	{
		sum=sum+mat[i][i];
	}
	printf("\nSum of diagonal elements is %d.",sum);
}
