#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nome[200];
	char endereco[300];
	char datanesc[11];
	char cidade[50];
	int cep;
	char email[150];
}dados;

int main(int argc, char *argv[]) {
	dados pessoa;
	printf("digite o nome da pessoa: \n");
	fflush(stdin);
	gets(pessoa.nome);
	printf("Digite o endereco da pessoa:\n");
	fflush(stdin);
	gets(pessoa.endereco);
	printf("Digite a data de nascimento da pessoa:\n");
	fflush(stdin);
	gets(pessoa.datanesc);
	printf("Digite a cidade dapessoa:\n");
	fflush(stdin);	
	scanf("%i",&pessoa.cep);
	printf("Digite o email da pessoa: \n");
	fflush(stdin);
	gets(pessoa.email);		
	
	return 0;
}
