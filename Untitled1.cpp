#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef struct elementos {
    char nome[50];	
} t_elemento;

typedef struct fila {
    t_elemento vetor[MAX]; // vetor que armazena a fila
    int inicio; // posicao do primeiro elemento
    int fim;    // posicao do ultimo elemento
    int quant_element;    // numero de elementos da fila
} t_fila;

t_fila criar()
{
    t_fila fila;

    fila.inicio = 0;
    fila.fim = -1;
    fila.quant_element = 0;


    return fila;
}

int inserir (t_fila * fila, t_elemento valor){
	
    (fila->quant_element)++;
    fila->fim = (fila->fim + 1) % MAX;
    fila->vetor[fila->fim] = valor;
    return 1;
}

t_elemento remover(t_fila * fila){
	
    t_elemento valor = { "" } ;

    valor = fila->vetor[fila->inicio];
    fila->vetor[fila->inicio].nome[0] = '\0';// zera, opcional
    (fila->quant_element)--;
    fila->inicio = (fila->inicio + 1) % MAX;
    return valor;
}

void mostraFila(t_fila * fila){
	
	int i = 0;
    for (i = fila->inicio; i != fila->fim + 1; i = (i + 1) % MAX)
        printf("Numero [%d] da fila %s\n", (i+1), fila->vetor[i]);
}

int main(){
	
	t_fila mFila = criar();
	int i = 0;
	t_elemento valor;
	for(i=0; i<4; i++){
		printf("Insira um nome: ");
		scanf("%s",&valor.nome);
		inserir(&mFila, valor);
		mostraFila(&mFila);
		system("pause");
		system("cls");	
	}
	
	for (i=0; i<3; i++){
		remover(&mFila);
		mostraFila(&mFila);
		system("pause");
	}
	

	return 0;
}
