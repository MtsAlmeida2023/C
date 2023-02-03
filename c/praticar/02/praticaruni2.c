#include <stdio.h>
#include <stdlib.h>
void main() {

	float e, p;
	
	printf("digite a medida do espelho: ");
		scanf("%f", &e);
	
	
	printf("digite a medida do piso: ");
		scanf("%f", &p);
		
	
	if(	(2*e)+p>= 63 && (2*e)+p<= 64	){
		printf("Confortavel");
	}else{
		printf("Nao Confortavel");
	}
	
}
