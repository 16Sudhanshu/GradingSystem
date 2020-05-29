#include<stdio.h>
struct employee
{
    int empno,salary;
    char empname[25],deptname[25];
}emp[100];
 
void main()
{
    int i,n;
    printf("Enter the no of employees\n");
    scanf("%d",&n);
    printf("Enter employee info as Employee no. ,Employee name , Department name , salary\n");
    for(i=1;i<=n;i++)
    {
    	printf("Details of employee %d are :",i);
        scanf("%d %s %s %d",&emp[i].empno,emp[i].empname,&emp[i].deptname,&emp[i].salary);
    }
    printf("\nEMP_No\tEMP_Name\tEMP_Dpt\t\tEMP_Sal\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\t\t%s\t\t%s\t\t%d\n",emp[i].empno,emp[i].empname,emp[i].deptname,emp[i].salary);
    }
}
