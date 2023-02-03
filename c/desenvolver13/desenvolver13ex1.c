#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() {
	char arq[100];
	int cont=0;
	char c;
	FILE *fp;
		if((fp=fopen("d.txt","w"))==NULL){
		printf("ERROR!\n");
		exit(1);
	}
	fprintf(fp,"aksmlamdksadeimkas");
	fclose(fp);
	if((fp=fopen("d.txt","r"))==NULL){
		printf("ERROR!\n");
		exit(1);
	}
	printf("Vogais: \n");
	while((c=fgetc(fp))!=EOF){
		if(toupper(c)=='A'||toupper(c)=='E'||toupper(c)=='I'||toupper(c)=='O'||toupper(c)=='U'){
			printf("%c",c);
			cont++;
		}
	}
	printf("\n quant: %i",cont);
	fclose(fp);
	return 0;
}
