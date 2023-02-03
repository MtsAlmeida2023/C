#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	FILE *arq;
	char nome[100];
	printf("Digite onome completo: ");
	gets(nome);
	if((arq=fopen("nome.txt","w"))!=NULL){
		fprintf(arq,"%s",nome);
		fclose(arq);
		
	}else{
		printf("ERRO AO ABRIR!\n");
	}
	if((arq=fopen("nome.txt","r"))!=NULL){
		fgets(nome,100,arq);
		printf("%s",nome);
		fclose(arq);
	}else printf("ERROR");
}
