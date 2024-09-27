//Lista linear Sequencial
/* Estrutura de dados na qual cada elemento � procedido por elemento
e sucedido por outro (exeto o primeiro que n�o tem prodecessor e o 
ultimo que n�o tem sucessor).
Os elementos est�o em uma dada ordem (por exemplo, a ordem de inclus�o ou ordenados
por uma chave).

Modelagem:
	Modelagem usando um arranjo de registro;
	Registros conter�o as informa��es de interesse 
	do usu�rio;
	Nosso arranjo ter� um tamanho fixo e controlaremos o n�mero de elementos
	com uma vari�vel adicional.
	
FUN��ES DE GERENCIAMENTO:
	implementaremos fun��es para:
	
		@Incializar a estrutura
			Para inicializar uma estrutura qualquer, precisamos pensar nos valores adequados
			para cada um dos elementos;
			Para inicializar uma lista sequencial j� criada pelo usu�rio, s� precisamos colocar
			o valor 0 no n�mero de elementos v�lidos;
			
			EXEMPLO
				void inicializarLista(LISTA* 1){
					l->nroElem = 0;
			}
			
		@Retornar a quantidade de elementos v�lidos
			Para esta estrutura basta retornar o valor do campo "nroElem"
			
			EXEMPLO
				int tamanho(LISTA* 1) {
					return l->nroElem;
			}
		
		@Exibir os elementos da estrutura 
			Para exibir os elementos da estrutura precisamos iterar
			pelos elementos v�lidos e, por exemplo, imprimir suas chaves.
			
			EXEMPLO
				void exibirLista(LISTA* 1){
					int i;
					printf("Lista: \" ");
					for (i=0; i < nroElem; i++)
						printf("%i ", 1->A[i].chave);
					printf("\"\n");
			}
			
		@Buscar por elementos na estrutura
			A fun��o de busca dever�:
				Receber uma chave do usu�rio.
				Retornar a posi��o em que este elemento se
				encontra na lista (caso seja encontrado).
				Retornar -1 caso n�o haja um registro com essa chave na lista.
				
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
			O usu�rio passa como par�metro um resgistro a ser inserido na lista
			H� diferentes possibilidade de inser��o.
				No in�cio.
				No fim.
				Ordenada pela chave.
				Numa posi��o indicada pelo usu�rio
					Se a lista n�o estiver cheia e o �ndice passado pelo
					usu�rio for v�lido: desloca todos os elementos 
					posteriores uma posi��o para direita;
					insere o elemento na posi��o desejada, soma um no 
					campo nroElem e retorna TRUE
					Caso contr�rio retorna FALSE
			
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
			O usu�rio passa a chave do elemento que ele quer excluir
				Se houver um elemento com esta chave na lista,
				"exclui esta elemento", desloca todos os elementos 
				posteriores uma posi��o para esquerda, diminui em
				um campo nroElem e retorna true
				Caso contr�rio, retorna false
			
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
			Para reinicializar s� criar com um arranjo 0
			
		@BUSCA POR ELEMENTOS +++(Inser��o de elementos - ordenada)
			BIN�RIA 
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


