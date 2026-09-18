#include <stdio.h>
#include <math.h>
 

int main() {

    double valor, mantissa;
    int expoente = 0;
 
    printf("Digite um valor positivo: ");
    scanf("%lf", &valor);
 
    mantissa = valor;
 
 
    while (mantissa >= 10.0) {
        mantissa = mantissa / 10.0;
        expoente++;
    }
 
 
    while (mantissa < 1.0) {
        mantissa = mantissa * 10.0;
        expoente--;
    }
 
    printf("Notacao cientifica: %.4lf x 10^%d\n", mantissa, expoente);

    return 0;
}
