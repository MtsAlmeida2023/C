#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Recursividade 
int mdc(int x, int y){
	int aux;
	if(y==0) return x;
	else{
		aux=mdc(y,x%y);
	}
	return aux;
    }
int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	int x,y, md;
	printf("Digite o valor de x: \n");
	scanf("%i",&x);
	printf("Digite o valor de y: \n");
	scanf("%i",&y);
    md=mdc(x,y);
	printf("O MDC de %i e de %i é: %i",x,y,md);
	return 0;
}
