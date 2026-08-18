#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, antecessor, sucessor;
	printf("Entre com o valor de N");
	scanf("%d", &n);
	printf(" o numero %d, seu antecessor %d e seu sucessor %d", n, n-1, n+1);
	
	
	int a, b, c, maiorTemp, maior;
	printf("insira tres valores:");
	scanf("%d, %d, %d", &a, &b, &c);
	

	maiorTemp = ((a+b+abs(a-b))/2);
	printf("o maior entre |%d|%d|%d| = %d", a,b,c, maiorTemp);
	
	return 0;
}
