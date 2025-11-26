//write a c program to print transpose of the given matrix
#include<stdio.h>
int main(){
	int mat[3][3],tr[3][3],i,j;
	printf("\n enter the elements of the matrix");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scnaf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			tr[j][i]=mat[i][j];
		}
	}
	printf("\n the transpose of the matrix is /n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d ",tr[i][j]);
	    }
    	printf("\n");
    }
}
