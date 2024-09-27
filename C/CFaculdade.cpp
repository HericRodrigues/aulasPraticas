#include <stdio.h>
int main(int argc, char* argv[]){
	int matA[2][3], matB[2][3], matC[2][3], i,j;
	for (i=0; i<2; i++){
	
		for(j=0; j<3; j++){
			printf("Digite o valor para o %do. elemento da linha %d, coluna %d da matriz A: ",j+1,i+1);
			scanf("%d", &matA[i][j]);
		}	
	}
	
	
	printf("\n");
	for (i=0; i<2; i++){
		for(j=0; j<3; j++){
		printf("Digite o valor para o %do. elemento da linha %d, coluna %d da matriz B: ",j+1,i+1);
		scanf("%d", &matB[i][j]);
		}
	}
	
	
	
	printf("\n Os valores somados são: \n");
	for (i=0; i<2; i++){
		for(j=0; j<3; j++){
			matC[i][j]=matA[i][j]+matB[i][j];
			}	
			printf("%d\t", matC[i][j])
			
	
	}
	return 0;
}
