//write a c program to print the fibanocci series using recursive function
#include<stdio.h>
int fib(int );
int main()
{
	int n,i;
	printf("\nenter any positive integer number:");
	scanf("%d",&n);
	for(i=0;i<5;i++){
    	printf(" %d",fib(i));
    }
}
int fib(int x)
{
	if(x==0||x==1)
	return x;
	else
	return fib(x-1)+fib(x-2);
}
