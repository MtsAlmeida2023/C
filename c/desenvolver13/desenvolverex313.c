#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct pessoa{
	int codigo;
	char nome[100];
	int idade;
	char telefone[15];
}pessoa;

void main(){
	pessoa temp;
	pessoa dados[5];
	int i;
	for(i=0;i<5;i++){
		printf("Digite o codigo da pessoa %i: ",i+1);
		scanf("%i",&dados[i].codigo);
		printf("Digite o nome da pessoa %i: ",i+1);
		fflush(stdin);
		gets(dados[i].nome);
		printf("Digite a idade da pessoa %i: ",i+1);
		scanf("%i",&dados[i].idade);
		printf("Digite o telefone da pessoa %i: ",i+1);
		fflush(stdin);
		gets(dados[i].telefone);
	}
	FILE *arq=fopen("pessoas.txt","w");
	if(arq==NULL){
		printf("ERRO");
		exit(0);
	}
	fwrite(dados,sizeof(pessoa),5,arq);
	fclose(arq);
	arq=fopen("pessoas.txt","r");
	if(arq==NULL){
		printf("ERRO");
		exit(0);
	}
	fseek(arq,1*sizeof(pessoa),SEEK_SET);
	fread(&temp,sizeof(pessoa),1,arq);
	printf("Codigo: %i\n",temp.codigo);
	printf("nome: %s\n",temp.nome);
	printf("idade: %i\n",temp.idade);
	printf("Codigo: %s\n",temp.telefone);
}
