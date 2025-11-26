//write a c program to find the factorial of the given number using recursion
#include<stdio.h>
int fact(int );
int main()
{
	int n;
	printf("enter any positive integer:");
	scanf("%d",&n);
	printf("factorial is %d",fact(n));
}
int fact(int x)
{
	if(x==1||x==0)
	return 1;
	else
	return x*fact(x-1);
}
