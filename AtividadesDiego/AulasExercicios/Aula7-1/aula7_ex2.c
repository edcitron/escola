#include <stdio.h>

typedef struct {
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
} baseinfo;

float CalcularMedia(baseinfo aluno) {
    return (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3;
}

char definirConceito (float media) {
    if ( media >= 9.0) return 'A';
    if ( media >= 7.0) return 'B';
    if ( media >= 5.0) return 'C';
return 'D';
}

void imprimirResultado(baseinfo aluno) {
    float media = CalcularMedia(aluno);
    char conceito = definirConceito(media);
    printf("\n------------------------------\n");
    printf("Aluno: %s\n", aluno.nome);
    printf("Media: %.2f\n", media);
    printf("Conceito: %c\n", conceito);
    printf("\n------------------------------\n");
}

int main() {
    baseinfo alunos[3];
    for (int i = 0; i < 3; i++) {
        printf("\n------------ aluno %d ------------------\n", i + 1);
        printf("Digite o nome do aluno: ");
        scanf("%49s", alunos[i].nome);

        printf("Digite a primeira nota do aluno: ");
        scanf("%f", &alunos[i].nota1);

        printf("Digite a segunda nota do aluno: ");
        scanf("%f", &alunos[i].nota2);

        printf("Digite a terceira nota do aluno: ");
        scanf("%f", &alunos[i].nota3);

        imprimirResultado(alunos[i]);
    }

    return 0;
}
