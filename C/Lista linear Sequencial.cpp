//Lista linear Sequencial
/* Estrutura de dados na qual cada elemento é procedido por elemento
e sucedido por outro (exeto o primeiro que não tem prodecessor e o 
ultimo que não tem sucessor).
Os elementos estão em uma dada ordem (por exemplo, a ordem de inclusão ou ordenados
por uma chave).

Modelagem:
	Modelagem usando um arranjo de registro;
	Registros conterão as informações de interesse 
	do usuário;
	Nosso arranjo terá um tamanho fixo e controlaremos o número de elementos
	com uma variável adicional.
	
FUNÇÕES DE GERENCIAMENTO:
	implementaremos funções para:
	
		@Incializar a estrutura
			Para inicializar uma estrutura qualquer, precisamos pensar nos valores adequados
			para cada um dos elementos;
			Para inicializar uma lista sequencial já criada pelo usuário, só precisamos colocar
			o valor 0 no número de elementos válidos;
			
			EXEMPLO
				void inicializarLista(LISTA* 1){
					l->nroElem = 0;
			}
			
		@Retornar a quantidade de elementos válidos
			Para esta estrutura basta retornar o valor do campo "nroElem"
			
			EXEMPLO
				int tamanho(LISTA* 1) {
					return l->nroElem;
			}
		
		@Exibir os elementos da estrutura 
			Para exibir os elementos da estrutura precisamos iterar
			pelos elementos válidos e, por exemplo, imprimir suas chaves.
			
			EXEMPLO
				void exibirLista(LISTA* 1){
					int i;
					printf("Lista: \" ");
					for (i=0; i < nroElem; i++)
						printf("%i ", 1->A[i].chave);
					printf("\"\n");
			}
			
		@Buscar por elementos na estrutura
			A função de busca deverá:
				Receber uma chave do usuário.
				Retornar a posição em que este elemento se
				encontra na lista (caso seja encontrado).
				Retornar -1 caso não haja um registro com essa chave na lista.
				
			EXEMPLO
				int buscaSequencial(LISTA* 1, TIPOCHAVE ch){
					int i = 0;
					while (i < l->nroElem){
						if(ch == l ->A[i].chave) return i;
						else i++;
					}
					return -1;
				}
			
		@Inserir elementos na estrutura
			O usuário passa como parâmetro um resgistro a ser inserido na lista
			Há diferentes possibilidade de inserção.
				No início.
				No fim.
				Ordenada pela chave.
				Numa posição indicada pelo usuário
					Se a lista não estiver cheia e o índice passado pelo
					usuário for válido: desloca todos os elementos 
					posteriores uma posição para direita;
					insere o elemento na posição desejada, soma um no 
					campo nroElem e retorna TRUE
					Caso contrário retorna FALSE
			
			EXEMPLO
				bool inserirElemLista(LISTA* l, REGISTRO reg, int i){
				int j;
				if ((l->nroElem == MAX) || (i<0) || (i > l->nroElem))
				 	return false;	
				for (j= l->nroElem, j > i; j--) l->A[j] =l->A[j-1];
				l->A[i] = reg;
				l->nroElem++;
				return true;
				}
				
		@Excluir elementos da estrutura
			O usuário passa a chave do elemento que ele quer excluir
				Se houver um elemento com esta chave na lista,
				"exclui esta elemento", desloca todos os elementos 
				posteriores uma posição para esquerda, diminui em
				um campo nroElem e retorna true
				Caso contrário, retorna false
			
			EXEMPLO
				bool excluirElemLista(TIPOCHAVE ch, LISTA* l){
					int pos, j;
					pos = buscaSequencial(l, ch);
					if (pos == -1) return false
					for(j = pos; j <l-nroElem-1; j++)
						l->A[j] = l->A[j+1];
					l->nroElem--;
					return true;
			 	}
		
		@Reinicializar a estrutura
			Para reinicializar só criar com um arranjo 0
			
		@BUSCA POR ELEMENTOS +++(Inserção de elementos - ordenada)
			BINÁRIA 
				EXEMPLO 
					bool inserirElemListaOrd(LISTA* l, REGISTRO reg){
						if(l-> nroElem >= MAX) return false;
						int pos = l->A[pos-1];
						while(pos > 0 && l-> A[pos-1].chave > reg.chave) {
							l->A[pos] = l->A[pos-1];
							pos--;
						}
						l->A[pos]=reg;
						l->nroElem++;
					}


*/
//Modelagem


