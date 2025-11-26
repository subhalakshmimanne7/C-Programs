//write a c program to calculate the sum of the given digits
#include<stdio.h>
int main()
{
	int num,sum=0,rem;
	printf("enter a number:");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		sum=rem+sum;
		num=num/10;
	}
	printf("the sum of the digits are %d",sum);
}
