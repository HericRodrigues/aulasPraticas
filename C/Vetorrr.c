#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <malloc.h>

int TAM;
int *vetor;


void imprimirVetor(int *v);
void insercaoSort(int *v,int n);


void main(void){
	setlocale(LC_ALL,"Portuguese");
	printf("Insira a quantidade de números: ");
	scanf("%d",&TAM);
	while(TAM > 0){
		vetor = (int *) malloc(TAM*sizeof(int)); // aloca memoria 
		int vetor[TAM];
		srand(time(NULL));	
		int i;
		for(i = 0; i < TAM; i++){
		vetor[i] =  (rand() % 1000)+1;
		}
			imprimirVetor(vetor);
			insertSort(vetor,TAM);
			imprimirVetor(vetor);
			
			free(vetor); // libera memoria
			printf("Insira a quantidade de números "); 
			scanf("%d",&TAM);	
	}	
}

void imprimirVetor(int *v){
	int i;
	printf("\n-------------Vetor--------------\n");
	for(i = 0; i < TAM; i++){
		printf("%d, ", v[i]);
	}
	printf("\n\n");	
}


void insercaoSort(int *v,int n)
{
   int j;
   for (j = 1; j < n; ++j) {
      int x = v[j];
      int i;
      for (i = j-1; i >= 0 && v[i] > x; --i) 
         v[i+1] = v[i];
      v[i+1] = x;
   }
}

