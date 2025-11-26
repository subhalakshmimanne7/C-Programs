//write a c program to check whether the given num is prime or not
#include<stdio.h>
int main()
{
	int num,count,i;
	printf("enter a number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		count++;
	}
	if(count==2)
    printf("the number is a prime");
    else
    printf("the number is not a prime");
}
