//PIlha \LIFO\Stack

//usado para fazer o ir e voltar das página
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 10

//estrutura de dados pilha
typedef struct{
	int item[MAX];
	int topo;
}Pilha;

//verificar se há intens na pilha
void iniPilha(Pilha *p){
	p->topo -1;

}
//verifica se esta vazia a pilha
int vaziaPilha(Pilha*p) {
	if(p->topo == -1){
		return 1;
	}else{
		return 0;
	}
}
//verificar se esta cheia 
int cheioPilha(Pilha *p){
	if(p->topo == (MAX-1)){
		return 1;
	}else{
		return 0;
	}
}

//adicionando elemento na pilha operação PUSH
int empilhar(Pilha *p, int x){
	if(cheioPilha(p)){
		printf("\nErro pilha cheia!");
		return (-1);
		}else{
			p->item[p->topo]=x;
			p->topo++;
			return (p->topo);
		}
}


int desempilhar(Pilha*p){
	if(vaziaPilha(p)){
		printf("\nErro ao prilhar");
		return (-1);
	}else{
		int aux = p->item[p->topo];
		p->topo--;
		return aux;
	}
}

int retornaTopo (Pilha*p){
	return p->item[p->topo];	
}

void imprimirPilhaVetor(Pilha*p){
	printf("\n---------Imprimir Pilha como Vetor ---------\n");
	int i;
	for(i= 0; i <=p ->topo; i++){
		printf("%d, ",p->item[i]);
	}
	printf("\n----------------------------------------------\n");
}

void imprimirPilha(Pilha *p){
	printf("\n---------------Imprimir Pilha-----------\n");
	int i;
	for(i = p->topo; i>= 0; i--){
		printf("%d\n",p->item[i]);
	}
	printf("\n--------------------------\n ");
}



void main (void){
	setlocale(LC_ALL,"Portuguese");
	
	Pilha p;	
	iniPilha(&p);
		printf("\nEmpilhar o 10 na posição %d",empilhar(&p,10));
		//empilhar o 10 no topo
		printf("\nEmpilhar o 5 na posição %d",empilhar(&p,5));
		//empilhar o 5 no topo
		printf("\nEmpilhar o 25 na posição %d",empilhar(&p,25));
		//empilhar o 25 no topo
		printf("\nEmpilhar o 20 na posição %d",empilhar(&p,20 ));
		//empilhar o 20 no topo
		
		printf("\n\n");
		printf("\nRemoveu o valor %d",desempilhar(&p));
		printf("\nRemoveu o valor %d",desempilhar(&p));
		
		printf("\nEmpilhar o 10 na posição %d \n",empilhar(&p,177));
		//empilhar o 177 no topo
		printf("\nEmpilhar o 5 na posição %d \n",empilhar(&p,22));
		//empilhar o 22 no topo
		printf("\nEmpilhar o 25 na posição %d \n",empilhar(&p,2545));
		//empilhar o 2545 no topo
		printf("\nEmpilhar o 20 na posição %d \n",empilhar(&p,2855));
		//empilhar o 2855 no topo
		imprimirPilhaVetor(&p);
		imprimirPilha(&p);
		
}

