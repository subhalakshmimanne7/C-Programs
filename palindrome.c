//write a c program whether the number is a palindrome or not
#include<stdio.h>
int main()
{
	int num,rev=0,rem,org;  //org=original
	printf("enter a number:");
	scanf("%d",&num);
	org=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(org==rev)
	printf("the number is a palindrome");
	
	else
	printf("the number is not a palindrome");
	
}
