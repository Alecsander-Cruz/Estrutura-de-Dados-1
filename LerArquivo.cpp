#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int i;
	int *n;
	
	FILE *fp;
	
	fp = fopen("readme.txt", "r");
	
	if(fp == 0){		
		printf("erro ao abrir o arquivo\n");
	}else{
		
		printf("arquivo aberto com sucesso\n");
		
		while(!feof(fp)){
		
			n =(int) (fgetc(fp) - '0');
			printf("%d", n);
		}
		fclose(fp);	
	}
	
	system("pause");
	return 0;
}
