#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	/** pegar CPF do teclado
	* separar 10º e o 11º numeros digitados
	* calcular DV 1
	* comparar com 10º
	* calcular DV 2
	* comparar com 11º */
	
	
	int cpf[11];
	char c;
	int n, i;
	int  soma1 = 0;
	int  soma2 = 0;
	
	
	printf("Digite o seu cpf: ");
	for (i=0; i < 11; i++){
		cpf[i] = (int) (getchar() - '0');
	}
	
	for (i=0; i < 9; i++){
		
		soma1 += cpf[i] * (10-i);
	}
	
	soma1 = soma1%11;
	
	if(soma1 == 0 || soma1 == 1){
		soma1 = 0;
	}else{
		soma1 = 11 - soma1;
	}
	
	if (soma1 != cpf[9]){
		printf("O primeiro digito verificador esta errado!\n");
		exit(0);
	}
	
	for(i=0; i<10; i++){
		soma2 += cpf[i] * (11-i);
	}
	
	soma2 = soma2%11;
	
	if(soma2 == 0 || soma2 == 1){
		soma2 = 0;
	}else{
		soma2 = 11 - soma2;
	}
	
	if(soma2 != cpf[10]){
		printf("O segundo digito verificador esta errado!\n");
		exit(0);
	}
	printf("\n O CPF eh valido!\n");
}
