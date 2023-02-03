#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	FILE *arq;
	int i,num[10];
	for(i=0;i<10;i++){
		printf("Digite o numero %i: \n",i+1);
		scanf("%i",&num[i]);
	}
	for(i=0;i<1,0;i++){
		num[i]=0;
	}
	if((arq=fopen("numeros.txt","w"))!=NULL){
	 for(i=0;i<10;i++){
	 		fprintf(arq,"%i\n",num[i]);
	 }
	 fclose(arq);
	}
	if((arq=fopen("numeros.txt","r"))!=NULL){
	 for(i=0;i<10;i++){
	 		fscanf(arq,"%i",&num[i]);
	 		printf("%i\n",num[i]);
	 }
	 fclose(arq);
	}
	return 0;
}
