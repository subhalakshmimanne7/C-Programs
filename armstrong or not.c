//write a c program to verify whether the number is armstrong or not
#include<stdio.h>
#include<math.h>
int main()
{
	int num,temp,rem,org,len=0,sum=0;
	printf("enter a number:");
	scanf("%d",&num);
	org=num;
	temp=num;
	while(num!=0)
	{
		rem=num%10;
		len++;
		num=num/10;
	}
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum+pow(rem,len);
		temp=temp/10;
	}
	if(sum==org)
	   printf("the number is a armstrong %d",org);
	else
	   printf("the number is not armstrong %d",org);
	   
}
