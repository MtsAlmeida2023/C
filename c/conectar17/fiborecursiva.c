#include <stdio.h>
#include <stdlib.h>

int peres(int n){
	int aux=0;
	if(n == 0) return 0;
	if(n == 2) return 2;
	else{
	aux = peres(n)/2;
	return aux;
	}
}

int main() {
int n, fib;

printf("digite o valor do numero: ");
scanf("%i",&n);
fib = peres(n);
printf("a fibonacci e: %i", fib);
	return 0;
}
