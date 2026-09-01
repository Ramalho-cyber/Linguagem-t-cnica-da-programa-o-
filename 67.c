#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	char letra;
	printf("Insira uma letra: ");
	scanf("%d", &letra);
	
	if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
		if(letra == 'a' || letra == 'o'){
			printf("aoba");
		}
	    if(letra == 'i' || letra == 'u'){
		   printf("la ele");
	    }
	 }else {
		printf("67");
	}
	printf("\n");
	
	else if(letra == 'a')printf("a de abacaxi");
  else if(letra == 'b')printf("b de bola");
	else if(letra == 'c')printf("c de cavalo");
	else if(letra == 'd')printf("d de dado");
	
	
	switch (letra){
		case 'a':
			printf("a de amor");
			break;
		case 'b':
			printf("b de bruto-memo");
			break;
		case 'c':
			printf("c de cabeçalho");
			break;
		case 'd':
			printf("d de danonão grosso");
			break;
	}
	
	
	
	return 0;
}
