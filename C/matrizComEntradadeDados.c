//Matriz de entrada de dados pelo usuario.
#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL,"Portuguese");
	int i, j, linha, coluna;
	
	printf("Entre com o numero de linha&coluna");
	scanf("%d%d",&linha,&coluna);
	
	printf("\nEntre com a Matriz : \n");
	for(i=0;i<linha; i++){
		for(j=0; i<coluna; j++){
			scanf("%d",[i][j]);
		}
	}
	
	printf("\nTransposição da matriz : \n");
	for(i=0; i<linha; i++){
		for(j=0; i<coluna; j++){
			printf("%d",[j][i]);
		}
		printf("\n");
	}
}
