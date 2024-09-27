#include <locale.h>

#define TAM 6

int bilhete[TAM];
void main (void){
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	int i;
	for (i=0; i < TAM; i++){
		bilhete[i]=rand() % 70;

	}
	printf("Os numeros da MEGA-SENA são: \n");
	for (i=0; i < TAM; i++){
		printf("%d, ", bilhete[i]);
	}
}
