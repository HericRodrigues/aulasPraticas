//Conversor de Temperatura;
//Tranformar graus celsius em fahrenheit;

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	float conversao1, conversao2, graus, fahrenheit;
	
			
			printf("Digite a Temperatura em Graus celsius para ser feito a convers�o para Fahrenheit: ");
			scanf("%f",&graus);
			//printf("Digite a Temperatura em fahrenheit celsius para ser feito a convers�o para Graus: ");
			//scanf("%f",&fahrenheit);
			
				conversao1 = (graus - 32)  /1,8;
				
				printf("A convers�o da temperatura �: %f.2�, Fahrenheit", conversao1);
			
			
				//conversao2 = (fahrenheit - 32*5/9);
				//printf("/n A convers�o da temperatura �: ",comversao2);
			
				
				
				return 0;
					
				
					
}

