#include <stdio.h>

typedef struct {
    char nome[50];
    float nota;    
} infoAluno;

int main() {
    setbuf(stdout, NULL);
    int n, iMaior = 0, iMenor;
    scanf("%d", &n);
    infoAluno aluno[n];
    printf("Digite o numero de alunos: ");
    

    for (int i = 0; i < n; i++) {
        printf("Digite o nome do aluno: ");
        scanf("%s", aluno[i].nome);
        printf("Digite a notas do aluno: ");
        scanf("%f", aluno[i].nota)
        if (aluno[i].nota > aluno[iMaior].nota) { 
            iMaior = i;
        } else if (aluno[i].nota < aluno[iMenor].nota) {
            iMenor = i;
        }     
    }

    printf("Maior nota: %.2f", aluno[iMaior].nota);
    printf("\nMenor nota: %.2f", aluno[iMenor].nota); 
    return 0;
    
}