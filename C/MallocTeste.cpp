//Malloc algumas mudanças...

#include <stdio.h>
#define alturaMaxima 225

typedef struct{
	int peso; //peso em quilogramas
	int altura; //altura em centimetros

} PesoAltura;

int main(){
	PesoAltura* pessoa1 = (PesoAltura*) malloc(sizeof(PesoAltura));
	pessoa1->peso = 80;
	pessoa1->altura = 186;
	printf("Peso: %i, Altura %i, ",pessoa1->peso, pessoa1->altura); // MUDAR O PONTO COLOCAR SETINHA!!!
	if (pessoa1->altura>alturaMaxima)printf("Altura acima da maxima.\n");
	else print("Altura abaixo da maxima.\n");
	return 0;	
}
