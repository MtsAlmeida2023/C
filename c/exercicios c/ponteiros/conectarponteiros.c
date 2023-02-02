#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	int v1,v2,*p1,*p2;
	
	printf("Digite o valor do primeiro : \n");
	scanf("%i",&v1);
	printf("Digite o valor do segundo : \n");
	scanf("%i",&v2);
	p1=&v1;
	p2=&v2;
	if(p1>p2){
		printf("\nO maior endereço é o do primeiro número digitado");
		printf("\nO endereço é: %p",p1);
		printf("\nE seu conteudo é: %i", *p1);
	}else if(p2>p1){
		printf("\nO maior endereço é o do segundo número digitado");
		printf("\nO endereço é: %p",p2);
		printf("\nE seu conteudo é: %i", *p2);
	}
	printf("\nEndereço do primeiro número: %p",p1);
	printf("\nEndereço do segundo número: %p",p2);
	return 0;
}
