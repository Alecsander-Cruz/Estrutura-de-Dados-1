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
    int max;
} t_fila;

t_fila criar()
{
    t_fila fila = {""};

    fila.inicio = 0;
    fila.fim = -1;
    fila.quant_element = 0;
    fila.max = MAX;


    return fila;
}

void inserir (t_fila * fila, t_elemento valor){

    (fila->quant_element)++;
    fila->fim = (fila->fim + 1) % MAX;
    fila->vetor[fila->fim] = valor;
}

t_elemento remover(t_fila * fila){
	
    t_elemento valor = { "" } ;
    valor = fila->vetor[fila->inicio];
    fila->vetor[fila->inicio].nome[0] = '\0';// zera, opcional
    (fila->quant_element)--;
    fila->inicio = (fila->inicio + 1) % MAX;
    return valor;
}

void mostrarFila(t_fila * fila){

	int cont, i;
	
	printf("\n ----- Exibindo fila -----\n\n");
	for ( cont=0, i= fila->inicio; cont < fila->quant_element; cont++){

		printf("    Posicao [%d] :: %s\n",(cont + 1),fila->vetor[i++]);

		if (i == fila->max)
			i=0;

	}
	printf("\n\n");
}


void loopInserir(t_fila * fila){
	
	t_elemento dado;
	int i=0;
	for(i=0; i<4; i++){
		printf("Insira um nome: ");
		scanf("%s",dado.nome);
		inserir(fila, dado);
		mostrarFila(fila);
		system("pause");
		system("cls");	
	}
}

int main(){
	
	int i=0;
	t_fila mFila = criar();
	loopInserir(&mFila);
	
	for (i=0; i<3; i++){
		remover(&mFila);
		mostrarFila(&mFila);
		system("pause");
		system("cls");
	}
	
	loopInserir(&mFila);
	return 0;
}
