#include <stdio.h>
int main(){
	int a[10][10],i,j,sum=0,m,n;
	
	printf("\nEnter the row and column of matrix: ");
	scanf("%d %d", &m, &n);
	
	printf("\n Enter the elements of matrix: ");
	for(i=0;i<m;i++);
		for(j=0;j<m;j++);
			scanf("%d",&a[i][j]);
	printf("\ntThe matrix is\n");
	
	for(i=0;i<m;i++){
		printf("\n");
		for(j=0;j<m;j++){
			printf("%d\t", a[i][j]);
			
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			if	(i==j)
				sum=sum+a[i][j];
		}
	}
	printf("\n\n Sum of the diagonal elements of a matrix is: %d", sum);
	return 0;
}

