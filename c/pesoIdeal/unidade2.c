#include <stdio.h>
#include <stdlib.h>


void main() {
	char sexo;
	float h = 0;
	float pi = 0;
	
	
	printf("Digite o seu sexo, (f) para feminino ou, (m) para masculino: " );
	scanf("%c",&sexo);
	printf("Digite sua altura:");
	scanf("%f",&h);
	
	if(sexo == 'f'){
		pi = (62.1*h) - 44.7;
		printf("Seu peso ideal e: %f", pi);
	}
	if(sexo == 'm'){
		pi = (72.7*h)-58;
		printf("Seu peso ideal e:%f",pi );
	}
}

