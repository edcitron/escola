#include <stdio.h>

typedef struct {
    char nome[50];
    float nota;
} infoAluno;

void linha() {
    printf("\n-----------------------------------\n");
}

int main() {
    int n, iMaior = 0, iMenor = 0, aprovado = 0;
    float media = 0;
    printf("Digite a quantidade de alunos:\n");
    scanf("%d", &n);
    infoAluno aluno[n];

    //leitura    
    for (int i = 0; i < n; i++) {
        printf("\n------------ aluno : %d ------------\n", i + 1);
        printf("\nDigite o nome do aluno: ");
        scanf("%s", aluno[i].nome);

        printf("\nDigite a nota: ");
        scanf("%f", &aluno[i].nota);

        // verificação de aprovado
        if (aluno[i].nota >= 6.0) {
            aprovado += 1;
        }
        
        //maior e menor nota
        if (aluno[i].nota > iMaior) {
            iMaior = i;
        }

        if (aluno[i].nota < iMenor) {
            iMenor = i;
        }        

        // media
        media += aluno[i].nota;
    } 

    media = media / n;
    
    //tabela
    for (int i = 0; i < n; i++) {
        printf("\n------------ Aluno : %d ------------\n", i + 1);
        printf("Nome: %s\n",  aluno[i].nome);
        printf("Nota :%.2f",  aluno[i].nota);
    }
    linha();
    printf("\nMelhor aluno: %s (nota : %.2f)\n", aluno[iMaior].nome, aluno[iMaior].nota);
    printf("Pior aluno: %s (nota : %.2f)\n", aluno[iMenor].nome, aluno[iMenor].nota);
    printf("Media: %.2f", media);
    linha();

    return 0;

}

