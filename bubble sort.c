//write a c program to arrange elements in ascending order using bubble sort
#include<stdio.h>
int main(){
	int a[10],temp,i,j;
	printf("enter any 10 integer numbers:");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<10-1;i++){
		for(j=0;j<10-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n the sorted elements are");
	for(i=0;i<10;i++){
		printf("%d",a[i]);
	}
}
