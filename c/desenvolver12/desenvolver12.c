#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	float x;
	float y;
}ponto;

ponto distancia(ponto inicial,ponto final){
	ponto resp;
	resp.x=final.x-inicial.x;
	resp.y=final.y-inicial.y;
	return resp;
}   

int main() {
	ponto i,f,r;
	printf("digit
	printf("digite o x inicial: ");
	scanf("%f",&i.x);e o y inicial: ");
	scanf("%f",&i.y);
	printf("digite o x final: ");
	scanf("%f",&f.x);
	printf("digite o y final: ");
	scanf("%f",&f.y);
	r=distancia(i,f);
	printf("X= %f",r.x);
	printf(" y= %f",r.y);
	return 0;
}
