#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	FILE *fp;
	int i;
	char nome[50];
	if((fp=fopen("arq.txt","w"))!=NULL){
		printf("******Arquivo aberto com sucesso******\n");
		for(i=0;i<2;i++){
			printf("Escreva o %i nome: \n",i+1);
			gets(nome);
			fprintf(fp,"%s", nome);
		}
	}else{
		fclose(fp);		
	}

	fp=fopen("arq.txt","r");
	if(fp==NULL){
		exit(0);
	}
	while(fgets(nome,50,fp)!=NULL){
	printf("%s",nome);
	fclose(fp);}
	return 0;
}
