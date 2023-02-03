#include <stdio.h>
#include <stdlib.h>

int f(int n){
	if(n==0) return 0;
	if(n==1) return 1;
	return f(n-1)+f(n-2);
}
int main(int argc, char *argv[]) {
//	f(5);
	printf("%i",f(7));
	return 0;
}
