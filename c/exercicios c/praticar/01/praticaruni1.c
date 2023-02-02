#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>


void main() {
	 float a, b, c, d, x1, x2;
	 float raiz;
	 
	 printf("digite o valor de a:");
	 	scanf("%f",&a);
	printf("digite o valor de b:");
		scanf("%f",&b);
	printf("digite o valor de c:");
		scanf("%f",&c);
	
	d = b*b-4*a*c;
	raiz = sqrt(d);

	
	if(d<0){
		printf("nenhuma raiz");
	
	}

	if(d==0){
		x1 = -b/2*a;
		printf("A raiz e: %f",x1);
	}
	
	if(d>0){
		x1 = -b+raiz/2*a;
		x2 = -b-raiz/2*a;
		printf("\n o resultado de x1 e = %f", x1);
		printf("\n o resultado de x2 e = %f", x2);
	}
}
