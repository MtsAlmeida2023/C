#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main() {
	
	char palavras[4][50],concat[200];
	printf("digite a primeira palavra: ");
	gets(palavras[0]);
	printf("digite a segunda palavra: ");
	gets(palavras[1]);
	printf("digite a terceira palavra: ");
	gets(palavras[2]);
	printf("digite a quarta palavra: ");
	gets(palavras[3]);
//	concat[0]='\0';
	strcpy(concat,palavras[0]);
	strcat(concat,palavras[1]);
	strcat(concat,palavras[2]);
	strcat(concat,palavras[3]);
	printf("CONCAT: %s\n",concat);
	
}

/*int posicao_elemento(char v[],char letra){
	int i;
	for (i=0;i<strlen(v);i++){
		if(v[i]==letra){
			return i;
		}
	}
	return -1;
}
void main(){
char vet[100];
printf("digite uma palavra: \n");
gets(vet);
printf("posicao_elemento: %i",posicao_elemento(vet,'a'));
}*/











