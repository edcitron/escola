#include <stdio.h>

typedef struct {
    char nome[50];
    float nota;
} base;

int main() {
    int quantidade;
    int aprovados = 0;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quantidade);
    base aluno[quantidade];
    for (int i = 0; i < quantidade; i++) {
        printf("\n------------ aluno %d ------------------\n", i + 1);
        printf("Digite o nome do aluno: ");
        scanf("%s", aluno[i].nome);

        printf("Digite a nota do aluno: ");
        scanf("%f", &aluno[i].nota);
        
    }

    float soma = 0;
    for ( int i = 0; i < quantidade ; i ++) {
        soma += aluno[i].nota;
        if (aluno[i].nota >= 7.0) {
            aprovados++;
        }
    }

    float media = soma / quantidade;
    printf("Media da turma: %.2f\n", media);
    printf("Quantidade de alunos aprovados: %d\n", aprovados);

    return 0;
}