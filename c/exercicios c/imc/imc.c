#include <stdio.h>
#include <stdlib.h>
int main() {
	float geral [15][3],altura[15],peso[15],imc[15], maior=0,menor;
	int i,j;
	
for(i=0;i<15;i++){
	printf("digite o peso da %i pessoa:\n ", i+1);
	scanf("%f",&peso[i]);
	printf("digite o altura da %i pessoa:\n ", i+1);
	scanf("%f",&altura[i]);
	imc[i] = peso[i]/(altura[i]*altura[i]);
	if(imc[i]>=maior){
		maior=imc[i];
	} 
}
menor = imc[0];
for(i=0;i<15;i++){
	if(imc[i]<=menor ){
		menor=imc[i];
	}
}
for(i=0;i<15;i++){
	for(j=0;j<3;j++){
		if(j==0){
			geral[i][j] = peso[i];
		}
		if(j==1){
			geral[i][j] = altura[i];
		}
		if(j==2){
			geral[i][j] = imc[i];
		}
	}
}
system("cls");
printf("\t\tPESO\tALTURA\tIMC");
for(i=0;i<15;i++){
	printf("\n------------------------------------------------\n");
	printf("%i pessoa\t",i+1);
	for(j=0;j<3;j++){
		printf("%.2f\t",geral[i][j]);
	}
}
printf("\n------------------------------------------------\n");
printf("\nO maior imc e %.2f e o menor e o %.2f", maior, menor);

	return 0;
}
