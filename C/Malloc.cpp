//Funcao malloc
#include <stdio.h>// serve para imprimir algo
#include <malloc.h>// nome da alocação
int main(){
int* y = (int*) malloc(sizeof(int));
	*y = 20;
	int z = sizeof(int);
	printf("*y=%i z=%i\n", *y, z);
	return 0;
}

/*Em c há uma função para alocação de memória:
Malloc(memory allocation).

-recebe como parâmetro o número de bytes que se deseja alocar.

-retorna o endereço inicial do bloco de bytes que foi alocado,
porém esse retorno tem o tipo void*(ponteiro para void).

-há um operador chamado sizeof que recebe como parâmetro um tipo
(simples e composto) e retorna a quantidade de bytes ocupada 
por esse tipo.
*/

