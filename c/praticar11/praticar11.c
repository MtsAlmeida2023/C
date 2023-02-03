#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL,"");
	char s1[100], s2[]="senha1234";
	printf("Digite a senha: ");
	gets(s1);
	if(strcmp(s1,s2)==0){
		printf("A senha é valida");
	}else printf("A senha é invalida");
}
