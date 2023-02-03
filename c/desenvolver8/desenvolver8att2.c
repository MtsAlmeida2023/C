#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int m=2,n=3,i,j,pontos;
	char gab[3],resp[2][3];
	printf("Gabarito: \n");
	for(i=0;i<n;i++){
		printf("Digite o gabarito questao %i:\n", i+1);
		fflush(stdin);
		scanf("%c",&gab[i]);
	}
	printf("Respostas: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Aluno %i questao %i: \n",i+1,j+1);
			fflush(stdin);
			scanf("%c",&resp[i][j]);
		}
	}
	printf("Gabarito: \n");
	for(i=0;i<n;i++){
		printf("%c\t",gab[i]);
	}
	printf("\nrespostas: \n");
	for(i=0;i<m;i++){
		pontos=0;
		printf("Aluno %i\t\n",i+1);
		for(j=0;j<n;j++){
			printf("%c\t",resp[i][j]);
			if(gab[j]==resp[i][j]){
				pontos++;
			}
		
		}
			printf("%i\n",pontos);
	}
	return 0;
}

