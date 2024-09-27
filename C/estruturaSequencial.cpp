// Estrutura de Seleção Sequencial
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {


	float n1, n2, n3, n4, ma;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite a Primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a Segunda nota: ");
	scanf("%f", &n2);
	printf("Digite a Terceira nota: ");
	scanf("%f", &n3);
	printf("Digite a Quarta nota: ");
	scanf("%f", &n4);
	ma = (n1+n2+n3+n4) /4;
	printf("A Media: %.2f", ma);
	return 0,
}
