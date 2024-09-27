/*Elaborar uma aplicação para ler a base e a altura de um retângulo, calcular o
seu perímetro e área, e exibir o resultado na tela.*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	
	double base, altura, perimetro, area;
	printf("Entre com a base: ");
	scanf("%d", &base);
	printf("Entre com altura: ");
	scanf("%d", &altura);
	perimetro = 2 * (base + altura);
	area = base * altura; 
	printf("\n O perimetro do retangulo eh: %4.1lf\n\n", perimetro);
	printf("\n A area do retangulo eh: %4.1lf\n\n", area);
	system("PAUSE");
	return 0;	
}


