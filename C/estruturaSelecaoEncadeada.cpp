//Estrutura Sele��o Encadeada
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
		printf("� um Tri�ngulo.\n");
		
		if (A == B && B == C)
			printf("Tri�ngulo Equil�tero.");
			
		else{
			if (A == B || A == C || B || C)
				printf("Tri�ngulo Is�sceles");
				
			else 
			printf("Tri�ngulo Escaleno.");
		}		
	}
	else{
		printf("Estes valores n�o formam um tri�ngulo. \n");
	}
	return 0;
}
