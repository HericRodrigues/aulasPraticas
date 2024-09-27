#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

#define aleatorio 100
#define valor 43
#define TAM 100


int vetor[TAM];

void imprimirVetor();
void insercaoSort(int *v, int n);
void selectionsort(int v[TAM], int n);

int main (void){
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	int i;
	for(i = 0; i < TAM; i++){
		vetor[i] = (rand() % aleatorio)+1;
	}
	imprimirVetor();
	//insercaoSort(&vetor, TAM);
	selectionSort(vetor,TAM);
	imprimirVetor();
	}
	
	

	void imprimirVetor(){
	int i;
	printf("\n==========================VETOR==========================\n");
	for(i = 0; i < TAM; i++){
		printf("%d, ", vetor[i]);
	
	}
	printf("\n\n");
}

void insercaoSort(int *v, int n){
	int j;
	for(j = 1; j < n; ++j){
		int x = v[j];
		int i;
		for(i = j-1; i >= 0 && v[i] > x; --i)
			v[i+1]=v[i];
		v[i+1]=x;
	}
}

void selectionSort(int v[TAM], int n){
	int i, j, aux, posicaoMenor;
	for(i = 0; i < n-1; i++){
		posicaoMenor = i;
		for (j = i+1; j < n; j++)
			if(v[j] < v[posicaoMenor])posicaoMenor = j;
		aux = v[i];
		v[i] = v[posicaoMenor];
		v[posicaoMenor]= aux;
	}
}
