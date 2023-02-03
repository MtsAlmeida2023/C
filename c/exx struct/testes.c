
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
 
typedef struct
{
    int codigo;
    char nome[200];
    float nota;
}Aluno;
 

 
int main()
{
	int quant=0;
	printf("quantos alunos: ");
	scanf("%i",&quant);
	Aluno aluno_especial[quant];
    setlocale(LC_ALL,"portuguese");
 

    int i;
  for(i=0;i<quant;i++){
    aluno_especial[i].codigo = 0;
    strcpy(aluno_especial[i].nome, "NULL");
    aluno_especial[i].nota = 0.0;
   /* printf(" \n O código do aluno especial é: %d ", aluno_especial[i].codigo);
    printf(" \n O nome do aluno especial é: %s ", aluno_especial[i].nome);
    printf(" \n A nota do aluno especial é: %.2f ", aluno_especial[i].nota);
    printf(" \n \n");*/
 
    printf(" Digite o código do aluno especial: ");
    scanf("%i", &aluno_especial[i].codigo);
 
    printf(" Digite o nome do aluno especial: ");
    fflush(stdin);
    gets(aluno_especial[i].nome);
 
    printf(" Digite a nota do aluno especial: ");
    scanf("%f", &aluno_especial[i].nota);
    system("cls");
}
  for(i=0;i<quant;i++){
  	
    printf(" \n O código do aluno especial é: %d ", aluno_especial[i].codigo);
    printf(" \n O nome do aluno especial é: %s ", aluno_especial[i].nome);
    printf(" \n A nota do aluno especial é: %.2f ", aluno_especial[i].nota);
    printf(" \n ");
}
 
    return 0;
}
