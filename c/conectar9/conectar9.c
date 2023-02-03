#include <stdio.h>
#include <stdlib.h>


   void multiplo(int n){
	  if(n>=0){
		multiplo(n-1);
		if(n%5==0){
		printf("%i\n",n);
		}
	}
}


   void main(){
	multiplo(50);
}
