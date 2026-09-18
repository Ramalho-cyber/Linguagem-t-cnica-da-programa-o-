#include <stdio.h>
#include <math.h>

int main(){


    double a, b, c;
    double maiorAB, maiorFinal;
 
    printf("Digite o primeiro valor (a): ");
    scanf("%lf", &a);
 
    printf("Digite o segundo valor (b): ");
    scanf("%lf", &b);
 
    printf("Digite o terceiro valor (c): ");
    scanf("%lf", &c);
 
  
    maiorAB = (a + b + fabs(a - b)) / 2.0;
 
    maiorFinal = (maiorAB + c + fabs(maiorAB - c)) / 2.0;
 
    printf("%.2lf eh o maior\n", maiorFinal);

    return 0;
}
