#include <stdio.h>
#include <stdlib.h>


typedef struct elemento{
	char placa[24];
}t_elemento;

typedef struct pilha{
	t_elemento vetor[3];
	int topo;
}t_pilha;

int push(t_pilha *pilha, t_elemento valor){
    //if (isCheia(pilha))
    //   return 0; // erro

    pilha->vetor[++pilha->topo] = valor;

    return 1; // sucesso
}





int adicionarCarros(t_pilha *plh){
	//pegar placa e guardar na pilha, 3 vezes
	
	t_elemento dado;
	int i = 0;
	
	//loop 3 vezes
	for(i=0; i<3; i++){
		
		//pegar placa
		printf("Digite a placa do Carro %d: ", i+1);
		scanf("%s", &dado.placa );
		
		//guardar placa
		push(plh, dado);

	}
}





int main(){
	
	t_pilha pilha;
	pilha.topo = -1;
	int i;
	
	
	
	// entrada de carros
	adicionarCarros(&pilha);
	
	// mostra carros
	i = pilha.topo;
	printf("%s", pilha.vetor[i].placa);
	//saida
	
	// mostra placa
	printf("%d", pilha.topo + 1);
	
	return 0;
}
