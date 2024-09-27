//Estrutura Seleção Encadeada
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv) {
	int A, B, C;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o Primeiro lado: ");
	scanf("%d", &A);
	printf("Digite o Segundo lado: ");
	scanf("%d", &B);
	printf("Digite o Terceiro lado: ");
	scanf("%d", &C);
	
	
	if (A<B+C && B < A + C && C < A + B) {
		printf("É um Triângulo.\n");
		
		if (A == B && B == C)
			printf("Triângulo Equilátero.");
			
		else{
			if (A == B || A == C || B || C)
				printf("Triângulo Isósceles");
				
			else 
			printf("Triângulo Escaleno.");
		}		
	}
	else{
		printf("Estes valores não formam um triângulo. \n");
	}
	return 0;
}
