//Estrutura de Seleção Múltipla
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	int mes;
	setlocale(LC_ALL, "Portuguese");
		printf("Digite o mês: ");
		scanf("%d", &mes);
		switch(mes)
		{
			case 1:
				printf("\n\nJaneiro");
				break;
			case 2:
				printf("\n\nFevereiro");
				break;
			case 3:
				printf("\n\nMarço");
				break;
			case 4:
				printf("\n\nAbril");
				break;
			case 5:
				printf("\n\nMaio");
				break;
			case 6:
				printf("\n\nJunho");
				break;
			case 7:
				printf("\n\nJulho");
				break;
			case 8:
				printf("\n\nAgosto");
				break;
			case 9:
				printf("\n\nSetembro");
				break;
			case 10:
				printf("\n\nOutubro");
				break;
			case 11:
				printf("\n\nNovembro");
				break;
			case 12:
				printf("\n\nDezembro");
				break;
			default:
				printf("\n\nMês Invalido cabaço!");
						
		}
		return 0;
}
