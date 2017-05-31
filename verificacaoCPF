#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int CPF[11];
	int digito1, digito2;
	int i = 0;
	int soma1, soma2;
	
	for(i = 0; i<11; i++){
		
		printf("Digite o digito de numero [%d] do seu cpf: ", (i+1));
		scanf("%d", &CPF[i]);
	}
	
	for(i=0; i<9; i++){
		soma1 = soma1 + (CPF[i] * (10 - i)); 
	}
	
	soma1 = (soma1%11);
	soma1 = 11 - soma1;
	
	if(soma1 > 9){
		digito1 = 0;
	}else{
		digito1 = soma1;
	}
	
	
	for(i=0; i<10; i++){
		soma2 = soma2 + (CPF[i] * (11-i));
	}
	
	soma2 = (soma2%11);
	soma2 = 11 - soma2;
	
	if(soma2 > 9){
		digito2 = 0;
	}else{
		digito2 = soma2;
	}
	
	
	if (digito1 == CPF[9]){
		if(digito2 == CPF[10]){
			printf("\nOs digitos verificadores sao validos! CPF valido\n");
		}else{
			("\nO segundo digito verificador eh invalido! CPF invalido\n");
		}
	}else{
		printf("\nO primeiro digito verificador eh invalido! CPF invalido\n");
	}
	
	system("pause");
	return 0;	
}
