#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
		char mes[30];
		int dia;
		int ano;
	}data;
int funccomp (data d1, data d2){
	if(d1.ano == d2.ano && d1.dia == d2.dia && strcmp(d1.mes,d2.mes)==0)return 1;
	else return 0;
}
void main() {
data d1, d2;
d1.ano = 2001;
d2.ano = 2001;
strcpy(d1.mes, "janeiro\0");
strcpy(d2.mes, "janiro\0");
d1.dia = 27;
d2.dia = 27;
printf("\nnumero %i",funccomp(d1,d2));
}







