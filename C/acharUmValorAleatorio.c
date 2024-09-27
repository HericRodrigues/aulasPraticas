#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

#define aleatorio 100
#define valor 50
#define TAM 100 // constante TAM

int vetor[TAM];

void main(void){
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	int i;
	for(i = 0; i < TAM; i++){
		vetor[i] = (rand() % aleatorio)+1;
	}
	//Ordenação primativa
	int j, aux;
	for(j = 0; j < TAM; j++){
		for(i = 0; i < TAM; i++){
			
		if(vetor[i] > vetor[i+1]){
			aux  = vetor[i];
			vetor[i] = vetor[i];
			vetor[i+1] = aux;
			}
		}
	}
	
	//Fim da ordenação primitiva
	
	printf("\n===================VETOR=======================\n");
	for(i = 0; i < TAM; i++){
		printf("%d, ", vetor[i]);
			
			
	}

	
	printf("\n\n");	
	int direita, esquerda, meio;
	bool encontrar = 0; //Falso
	esquerda = 0;
	direita = TAM - 1;
	
	while(esquerda<=direita && !encontrar){
		meio=(direita+esquerda)/2;
		if(vetor[meio]== valor) encontrar = 1; //Verdadeiro
		
	
	else
		if(valor < vetor[meio]) direita = meio -1;
		else esquerda = meio + 1;
	}
	if(encontrar){
		printf("\n\nValor %d encontrado na posicao %d\n", vetor[meio], meio);
	}else{
		printf("\n\nValor %d não encontrado\n", valor);
	}
	
}
