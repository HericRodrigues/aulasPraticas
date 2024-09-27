#include <stdio.h>
#include <locale.h>

#define TAM 2
int matriz[TAM][TAM];
void main (void){
	setlocale(LC_ALL,"Portuguese");
	//inserção de valores na matriz
	//linha ZERO!!!
	matriz[0][0] = 2;
	matriz[0][1] = 3;
	
	//linha UM!!!
	
	matriz[1][0] = 4;
	matriz[1][1] = 10;
	
	int i, j;
	for (i=0; i < 2; i++){
		for (j=0; j < 2; j++){
			printf("%d\t ", matriz[i][j]);
		}
		printf("\n");
	}
}
