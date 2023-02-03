#include <stdio.h>
#include <stdlib.h>
float** cria_matriz(int m,int n){
	int i;
	float **mat =(float**)malloc(m*sizeof(float*));
	for(i=0;i<m;i++){
		mat[i]=(float*)malloc(n*sizeof(float));
	}
	return mat;
}
void libera_matriz(float **p, int m){
	int i;
	if(p){
	for(i=0;i<m;i++){
		free(p[i]);
	}
	free(p);
	}
}

int main() {
	float **matriz=cria_matriz(3,2);
	libera_matriz(matriz,3);
	
	
	return 0;
}

