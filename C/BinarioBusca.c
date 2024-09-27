#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdbool.h>

#define aleatorio 100000000
#define valor 443
#define TAM 100000000  //constante TAM 

int vetor[TAM];

void main(void){
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	int i;
	for(i = 0; i < TAM; i++){
		vetor[i] =  (rand() % 100000000)+1;
	}
	printf("\n-------------Vetor--------------\n");
	for(i = 0; i < TAM; i++){
		printf("%d, ", vetor[i]);
	}
	printf("\n\n");
	// como saber se o número 143 existe no vetor.
	
	
	
	i = 0; 
	bool encontrado = 0; //falso
	
	while (i < TAM && !encontrado) {
	 	if (vetor[i] == valor) {
			encontrado = 1; /*Verdadeiro*/ 
		}else{
		 	i++; 
		}
	}
	if(encontrado){ 
		printf ("Valor %d está na posicao %d\n", vetor[i], i);
 	}else{ 
		printf ("Valor %d não encontrado\n", valor);
 	}


		
}


