//Funcao malloc
#include <stdio.h>// serve para imprimir algo
#include <malloc.h>// nome da aloca��o
int main(){
int* y = (int*) malloc(sizeof(int));
	*y = 20;
	int z = sizeof(int);
	printf("*y=%i z=%i\n", *y, z);
	return 0;
}

/*Em c h� uma fun��o para aloca��o de mem�ria:
Malloc(memory allocation).

-recebe como par�metro o n�mero de bytes que se deseja alocar.

-retorna o endere�o inicial do bloco de bytes que foi alocado,
por�m esse retorno tem o tipo void*(ponteiro para void).

-h� um operador chamado sizeof que recebe como par�metro um tipo
(simples e composto) e retorna a quantidade de bytes ocupada 
por esse tipo.
*/

