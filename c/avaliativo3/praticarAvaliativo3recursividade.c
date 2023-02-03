#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int imprimepar(int pare){
if(pare == 0){

return;}else{
	imprimepar(pare-1);
	if(pare % 2 == 0){
		printf("%d\n", pare);
	}
}
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	int n, par;
	
	printf("Digite 1 numero inteiro positivo: \n");
	scanf("%i",&n);
	par = imprimepar(n);
	return 0;
}
