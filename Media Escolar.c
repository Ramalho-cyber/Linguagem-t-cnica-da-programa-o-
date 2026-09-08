#include <stdio.h>
#include <stdlib.h>

int main() {

    char nome[50];
    float nota1, nota2, nota3, media;

    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", nome);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("\nAluno: %s\n", nome);
    printf("Media: %.2f\n", media);

    if (media >= 7.0) {
        printf("APROVADO!\n");
    }
    else if (media >= 4.0) {
        printf("EXAME!\n");
        printf("Falta %.2f pontos para atingir 10.0.\n", 10.0 - media);
    }
    else {
        printf("REPROVADO!\n");
    }

    return 0;
}
