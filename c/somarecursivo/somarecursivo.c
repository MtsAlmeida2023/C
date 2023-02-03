#include <stdio.h>
#include <conio.h>
double soma(int n);
int main(void)
{
  int numero;
  float f;
  printf("Digite o numero que deseja calcular : ");
  scanf("%d",&numero);
  f = soma(numero);
  printf("A soma total de %d e = %.0lf",numero,f);
 getch();
  return 0;
}
double soma(int n)
{
  float vsoma;
  if ( n == 0 ){
    return (0);
  }else
  {
    vsoma = n + soma(n - 1);
    return (vsoma);
  }
}
