#include <stdio.h>
#include <stdlib.h>


int deprecia(float pv, float r, int n){
	return (pv-r)/n;
}

int main() {
	float pv, r, dl;
	int n;
	printf("Digite o valor de aquisicao(R$): ");
	scanf("%f.2",&pv);
	printf("\nDigite o valor residual(R$): ");
	scanf("%f.2",&r);
	printf("\nDigite a vida util em anos: ");
	scanf("%i",&n);
	dl = deprecia(pv,r,n);
	printf("\no valor de depreciacao e de: %.2f",dl);
	return 0;
}
