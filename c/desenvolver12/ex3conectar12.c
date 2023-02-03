#include <stdio.h>
#include <stdlib.h>
typedef struct{
	int codigo;
	float salario;
	int idade;
	char sexo;
}func;
int main(int argc, char *argv[]) {
	int i,n;
	printf("digite a quantidade de func.: ");
	scanf("%i",&n);
	func *p=(func*)malloc(sizeof(func)*n);
	for(i=0;i<n;i++){
		printf("info do funcionario %i: \n",i+1);
		printf("digite o codigo: ");
		scanf("%i",&p[i].codigo);
		printf("digite o salario: ");
		scanf("%f",&p[i].salario);
		printf("digite o idade: ");
		scanf("%i",&p[i].idade);
		printf("digite o sexo (f) ou (m): ");
		fflush(stdin);
		scanf("%c",&p[i].sexo);
		system("cls");
	}
	for(i=0;i<n;i++){
		printf("Funcionario %i:\n",i+1);
		printf("Codigo: %i\n",p[i].codigo);
		printf("salario: %.2f\n",p[i].salario);
		printf("idade: %i\n",p[i].idade);
		printf("sexo: %c\n",p[i].sexo);
	}
	free(p);
	return 0;
}
