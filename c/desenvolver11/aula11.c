#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char str1[100], str2[100];
	printf("digite a primeira palavra: ");
	gets(str1);
	printf("digite a primeira palavra: ");
	gets(str2);
	printf("STR1: %s\n",str1);
	printf("STR2: %s\n",str2);
	printf("RETORNO: %i\n",strcmp(str1,str2));
	if(strcmp(str1,str2)==1){
		strcat(str2,str1);
		printf("COMCAT: %s\n",str2);
	}else{
		strcat(str1,str2);
		printf("COMCAT: %s\n",str1);	
	}
}
