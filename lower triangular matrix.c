//write a c program to print whether the given matrix is lower triangular matrix or not
#include<stdio.h>
int main(){
	int lt[3][3],i,j,flag=1;
	printf("\n enter the elements of matrix");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&lt[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if((i<j && lt[i][j]!=0) || (j<=i&&lt[i][j]==0)){
				flag=0;
				break;
			}
		}
	}
	if(flag==1){
		printf("\n the matrix is lower triangular");
	}
	else
	{
		printf("\n the matrix is not a lower triangular");
		
	}
}
