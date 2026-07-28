#include <stdio.h>

typedef struct {
    char nome[50];
    float nota;
} infoAluno;

int main() {
    setbuf(stdout, NULL);
    
    int n;
    printf("Digite o numero de alunos: ");
    scanf("%d", &n);    
    infoAluno aluno[n];
    int iMaior = 0;
    int iMenor = 0; 

    for (int i = 0; i < n; i++) {
        printf("Digite o nome do aluno %d: \n", i + 1);
        scanf("%s", aluno[i].nome);
        printf("Digite a nota do aluno: \n");
        scanf("%f", &aluno[i].nota); 
        if (aluno[i].nota > aluno[iMaior].nota) {
            iMaior = i;
        }
        if (aluno[i].nota < aluno[iMenor].nota) {
            iMenor = i;
        }
    }

    printf("\nMaior nota: %.2f (Aluno: %s)", aluno[iMaior].nota, aluno[iMaior].nome);
    printf("\nMenor nota: %.2f (Aluno: %s)\n", aluno[iMenor].nota, aluno[iMenor].nome);

    return 0;
}
