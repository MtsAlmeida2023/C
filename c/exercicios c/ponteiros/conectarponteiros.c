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
		printf("\nO maior endere�o � o do primeiro n�mero digitado");
		printf("\nO endere�o �: %p",p1);
		printf("\nE seu conteudo �: %i", *p1);
	}else if(p2>p1){
		printf("\nO maior endere�o � o do segundo n�mero digitado");
		printf("\nO endere�o �: %p",p2);
		printf("\nE seu conteudo �: %i", *p2);
	}
	printf("\nEndere�o do primeiro n�mero: %p",p1);
	printf("\nEndere�o do segundo n�mero: %p",p2);
	return 0;
}
