#include <stdlib.h>
#include <locale.h>

#define QTD 2
struct Data{
		int dia;
		int mes;
		int ano;
};

struct Aluno{
	char nome[20];
	struct Data nascimento;
	struct Data matricula;
	struct Data conclusaoCurso;
	char endereco[80];	
}lista[QTD]; 

typedef struct Aluno2{
	char nome[20];
	char endereco[80]
}aluno;

int x;

void main (void){
	setlocale(LC_ALL,"Portuguese");
	struct Aluno a1;
	printf("Tamanho de estrutura %d bytes",sizeof(aluno));
	

	int i;
	for(i = 0; i < QTD; i++){
		
		
	printf("\nInsira o nome do Aluno: ");
	scanf("%s",&lista[i].nome);
	printf("\nInsita o endereco do Aluno: ");
	scanf("%s",&lista[i].endereco);
	printf("\nInsire o dia de nascimento: ");
	scanf("%d",&lista[i].nascimento.dia);
	printf("\nInsira o mês do nascimento: ");
	scanf("%d",&lista[i].nascimento.mes);
	printf("\nInsira o ano de nascimento: ");
	scanf("%d",&lista[i].nascimento.ano);
}
	for(i = 0; i < QTD; i++){
		
		printf("\n\n\n");
	printf("\nNome: %s", &lista[i].nome);
	printf("\nEndereço: %s",&lista[i].endereco);
	printf("\nData de nascimento: %d/%d/%d",&lista[i].nascimento.dia,&lista[i].nascimento.mes,&lista[i].nascimento.ano);
	
	}
}

