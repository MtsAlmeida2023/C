#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
setlocale(LC_ALL,"" );

int numeros[20],i,menor,maior,pm,pn;
for(i=0;i<20;i++){
	printf("Digite o %d numero: \n",i+1);
	scanf("%i",&numeros[i]);
}
for(i=0;i<20;i++){
	printf("\n%i\t",numeros[i]);
	if(numeros[i]>=maior){
		maior=numeros[i];
		pm=i;
	}else if(numeros[i]<=menor){
		menor=numeros[i];
		pn=i;
	}
}
printf("\nO menor numero é o %i, que está na posição %i do vetor e é o %i digitado. ",menor,pn,pn+1);
printf("\nO maior numero é o %i, que está na posição %i do vetor e é o %i digitado. ",maior,pm,pm+1);
	return 0;
}
