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

t_elemento pop(t_pilha * pilha){
    //t_elemento vazio = { "" };
    //if (isVazia(pilha))
    //  return vazio; // erro
    //else
    
	return pilha->vetor[pilha->topo--];
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
		system("cls");
		
		//guardar placa
		push(plh, dado);

	}
}


int removerCarros(t_pilha *plh, int a){

	//loop 3 vezes
	
	for(a=3; a>0; a--){
		printf("\nO carro de placa [%s] saiu do beco! \n", plh->vetor[a-1].placa);
		
		//remove placa da pilha
		pop(plh);
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
	printf("A placa do terceiro carro eh: %s\n", pilha.vetor[i].placa);
	
	//saida
	removerCarros(&pilha, i);
	
	// mostra placa
	if (pilha.topo + 1 == 0){
		printf("\nNao existe nenhum carro no beco!", pilha.topo + 1);
	}else if (pilha.topo + 1 == 1){
		printf("\nExiste %d carro no beco!", pilha.topo + 1);
	}else{
		printf("\nExistem %d carros no beco!", pilha.topo + 1);
	}
	return 0;
}
