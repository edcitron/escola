#include <stdio.h>

typedef struct {
    int idade;
    float altura;
} info;

int main() {
    info pessoa;

    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);

    printf("Digite a altura em metros: ");
    scanf("%f", &pessoa.altura);

    printf("idade: %d, altura: %.2fm\n", pessoa.idade, pessoa.altura);
    return 0;
}