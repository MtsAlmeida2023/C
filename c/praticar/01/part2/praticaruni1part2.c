#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main() {
	float media, soma, notas;
	int qa, i;
	media=2;
	printf("digite a quantidade de alunos: ");
		scanf("%i",&qa);
	
	
	for(i=1; i<=qa; i++){
		printf("digite a nota do aluno(a):");
		scanf("%f",&notas);
		soma=notas+soma;
		media = soma/qa;
		
	}
	printf("\n a media e: %f",media);
	system("pause");
	return 0;
}

