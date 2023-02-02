#include <stdio.h>
#include <stdlib.h>
int main() {
float notas[10];
float notas_acima[10];
float media=0;
int i;
int g;
for (i=0;i<10;i++){printf("Digite a %d nota:", i+1);scanf("%f",&notas[i]);
}
for(i=0;i<10;i++){if(notas[i]>5){notas_acima[g] = notas[i];
		g++;	}
}
for(g=0;g<10;g++){	if(notas_acima[g]>=6){printf("Estao acima da media as notas:%.1f\n", notas_acima[g]);	}}
for(i=0;i<10;i++){	media = notas[i] + media;}
media=media/10;
printf("A media da sala e: %.1f\n", media);
	return 0;
}
