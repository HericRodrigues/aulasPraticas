#include <stdio.h>
#include <stdlib.h>

int matriz[5][5];
int linha, coluna, valor;

for (int i = 0; i < 5; i++)
	for (int j = 0; j < 5; j++)
		matriz[i][j] = 0;

do {
	printf("Usuário, digite linha, coluna e valor: ");
	scanf("%d %d %d", &linha, &coluna, &valor);

	if (linha >= 0 && coluna >= 0)
		matriz[linha][coluna] = valor;

} while (linha >= 0 && coluna >= 0);

 for (int i = 0; i < 5; i++) {
 	for (int j = 0; j < 5; j++)
 		printf("%d ", matriz[i][j]);
 	printf("\n");
}
