#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double a,b;

	// Pede o primeiro numero
	printf("Escreva o raio do circulo: ");
	scanf("%lf", &a); 
	
	
	//soma os numeros
	b = pi*(a*a);
	
	printf ("A=%.4f\n", b);
	
	float area_trapezio, base_maior, base_menor, altura;
	
	printf("\nDigite a Base Maior:");
	scanf("%f", &base_maior);
	
	printf("Digite a Base Menor:");
	scanf("%f", &base_menor);
	
	printf("Digite a Altura:");
	scanf("%f", &altura);
	
	area_trapezio = ((base_maior+base_menor)*altura)/2;
	
	printf("A area do trapezio e =%f", area_trapezio);
	
	


	return 0;
}
