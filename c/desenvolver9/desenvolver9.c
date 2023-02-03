#include <stdio.h>
#include <stdlib.h>

void troca(float *n1,float *n2){
	float aux;
	aux=*n1;
	*n1=*n2;
	*n2=aux;
}
int main(int argc, char *argv[]){
	float a,b;
	a=3;
	b=5;
	troca(&a,&b);
	printf("A=%f, B=%f",a,b);
	return 0;
}
