#include<stdio.h>
int main()
{
	int i,j,num,fact=1;
	printf("enter any  number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("the factorial is %d",fact);
}
