//write a c program to find the trace of the matrix
#include<stdio.h>
int main()
{
	int mat[3][3],i,j,tra=0;
	printf("enter the elements of matrix:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<3;i++){
		tra=tra+mat[i][i];
	}
	printf("the trace of the matrix is %d",tra);
}
