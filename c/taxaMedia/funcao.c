#include <stdio.h>
#include <stdlib.h>
float conta(float i, float i2,float j,float j2){
	float res;
	res=(i-i2)/(j-j2);
	return res;
}
int main(void) {
float taxa_media,y,yo,x,xo;
	cabec();
	printf("digite o valor de y: ");
	scanf("%f", &y);
	printf("\ndigite o valor de yo: ");
	scanf("%f", &yo);
	printf("\ndigite o valor de x: ");
	scanf("%f", &x);
	printf("\ndigite o valor de xo: ");
	scanf("%f", &xo);
	taxa_media=conta(y,yo,x,xo);
	printf("A taxa media e: %.1f", taxa_media);
	return 0;
}

