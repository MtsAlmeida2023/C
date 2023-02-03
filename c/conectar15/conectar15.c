#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int dividedata(char data[], int *dia, int *mes, int *ano){
		char vdia[3];
		char vmes[3];
		char vano[5];
	if(data[2] != '/' || data[5] != '/'){
		return -1;
	}

		strncpy(vdia,data,2);
		strncpy(vmes,data+3,2);
		strncpy(vano,data+6,4);
		

	if( !isdigit(*dia) || !isdigit(*mes)  || !isdigit(*ano)){
		*dia=atoi(vdia);
		*mes=atoi(vmes);
		*ano=atoi(vano);
		return 1;

	}else{

		return -2;
	}
		
		

}
int main(int argc, char *argv[]) {
	int *dia,*mes,*ano;
	char data[11];
	FILE *fp;
	if((fp=fopen("data.txt","w"))==NULL){
		printf("erro ao abrir o arquivo(DATA.TXT), na escrita\n");
		fclose(fp);
		system("pause");
		exit(0);
	}
	fflush(stdin);
	fprintf(fp,"20/02/2020");
	fclose(fp);
	if((fp=fopen("data.txt","r"))==NULL){
		printf("erro ao abrir o arquivo(DATA.TXT), na leitura\n");
		fclose(fp);
		system("pause");
		exit(0);
	}
	fgets(data,11,fp);
	printf("\t\t *TESTE*\n\t\t%s\n\n",data);
	printf("\n%i",dividedata(data,&dia,&mes,&ano));
	
	fclose(fp);
	return 0;
}
/*	printf("digite a data: ");

	printf("%s",data);
	printf("\n%i",dividedata(data,&dia,&mes,&ano));*/
	
