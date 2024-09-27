//Estrutura de Seleção
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	float N1,N2,N3,N4,MA;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite a Primeira Nota:");
	scanf("%f",&N1);
	printf("Digite a Segunda Nota: ");
	scanf("%f",&N2);
	printf("Digite a Terceira Nota: ");
	scanf("%f",&N3);
	printf("Digite a Quarta Nota: ");
	scanf("%f",&N4);
	MA = (N1+N2+N3+N4)/4;
	printf("A Media: %.2f\n",MA);
	if (MA >= 6){
		printf("Aluno Aprovado!\n");
	}
	else{
		printf("Aluno Reprovado!!\n");
	}
	return 0;
}
	
