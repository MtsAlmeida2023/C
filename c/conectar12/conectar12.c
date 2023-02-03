#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL,"");
	typedef struct {
		char nome[100];
		char genero [50];
		int integrantes;
		float valor;
	}banda;
	banda dejavu;
	printf("Digite o nome da banda: ");
	gets(dejavu.nome);	
	printf("\n");
	printf("Digite o genero da banda: ");
	gets(dejavu.genero);	
	printf("\n");
	printf("Digite o numeros de integrantes da banda: ");
	scanf("%i",&dejavu.integrantes);
	printf("\n");
	printf("Digite o valor de show da banda: ");
	scanf("%f",&dejavu.valor);
	printf("\n");
	system("cls");
	printf(" Nome da banda: %s\n Numero de integrantes: %i\n Genero da banda: %s\n Valor de show: %.2f",dejavu.nome,dejavu.integrantes,dejavu.genero,dejavu.valor);
}
