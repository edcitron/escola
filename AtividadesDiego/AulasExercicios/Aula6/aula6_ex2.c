#include <stdio.h>

typedef struct {
    char nome[50];
    float nota;    
} infoAluno;

int main() {
    setbuf(stdout, NULL);
    int n, aprovado = 0;
    infoAluno aluno[n];
    printf("Digite o numero de alunos: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i) {
        printf("Digite o nome do aluno: ");
        scanf("%s", aluno[i].nome);
        printf("Digite a notas do aluno: ");
        if (aluno[i].nota >= 6.0) { 
            aprovado += 1;
        }
    }

    for (int i = 0; i < n; i) {
        printf("\n----------aluno %d----------\n", i + 1);
        printf("Nome: %s\n", aluno[i].nome);
        printf("Nota: %.2f\n", aluno[i].nota);
        printf("Aprovados: %d", aprovado);

    }


}