//uso a struct
#include <stdio.h>
#define alturaMaxima 225

typedef struct{
	int peso; //peso em quilogramas(CAMPO INTEIRO)
	int altura; //altura em centimetros(CAMPO INTEIRO)

} PesoAltura; // PRECISA COLOCAR O NOME A ESTRUTURA...

// typerdef int CHAVE

// Define que a palavra CHAVE poderá ser usada no código para representar o tipo int

// (inteiro), isto é, demos um novo para o tipo int.

// mas na verdade isso serve para indentificar o INT mais fácil na estrutura

int main(){
	PesoAltura pessoa1;
	pessoa1.peso=80;
	pessoa1.altura=186
	printf("Peso: %i, Altura %i, ",pessoa1.peso, pessoa1.altura);
	if (pessoa1.altura>alturaMaxima)printf("Altura acima da maxima.\n");
	else print("Altura abaixo da maxima.\n");
	return 0;	
}
/* A sintexe STRUCT{...} define uma estrutura com os campos definidos
dentro das chaves.

A sintaxe TYPEDEF...PesoAltura define o nome PesoAltura para o que foi definido nas reticências.
