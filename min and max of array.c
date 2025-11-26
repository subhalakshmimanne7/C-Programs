// write a c program to find the min and max of the array
#include<stdio.h>
int main(){
	int a[10],i,min,max;
	printf("\n enter any 10 integer numbers");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<10;i++){
		min=a[0];
		max=a[0];
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("min=%d,max=%d",min,max);

	
}
