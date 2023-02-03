#include <stdio.h>
int potencia(int base, int expoente){
 if(expoente == 0)
 return 1;
 else
 return (base * potencia(base, expoente-1));
}
int main(){
 int base, exp, resultado;
 printf("digite o valor da base: ");
 scanf("%i",&base);
 printf("Digite o valor do expoente: ");
 scanf("%i",&exp);
 resultado = potencia(base,exp);
 printf("%d elevado a %d = %d", base, exp,potencia(base,exp));
 return 0;
}
