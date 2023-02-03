#include <stdio.h>
#include <stdlib.h>
void main() {
	int qc, im, ip;
	float renda;
	printf("Digite a quantidade de criacas:\n");
		scanf("%i",&qc);
	printf("digite sua renda familiar:\n");
		scanf("%f",&renda);
	printf("digte a idade do pai:\n");
		scanf("%i",&ip);
	printf("digite a idade da mae:\n");
		scanf("%i",&im);	
	if( qc>=3 && renda<500 && (	im>30 && im<50 || ip>40 && ip<60)){	
		printf("apta\n");	
	}else{
		printf("nao apta\n");
	}
return 0;
}
