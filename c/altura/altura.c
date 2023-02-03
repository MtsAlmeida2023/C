#include <stdio.h>
#include <stdlib.h>

void main() {
	
	float altura;
	int i, acima_media;
	char nome[50];
	printf("digite o nome da equipe:");
	gets(nome);
	//scanf("%s",&nome);
	acima_media=0;
	//while(i<=20){
	
	for(i=1;i<=20;i++){
		printf("digite a %i altura:",i);
		scanf("%f",&altura);
		if(altura>1.73){
			acima_media++;
		}
	//	i++;
	}

	printf("nome da equipe: %s\n", nome);
	printf("acima da media: %i",acima_media);
	
	return 0;
}
