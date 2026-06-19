#include <stdio.h>
#include <string.h>

/* ---- Tipo ---- */
typedef struct {
    char nome[50];
    float n1, n2, n3;
    float media;
    char conceito;
} Aluno;

/* ---- Prototipos ---- */
void lerTurma(Aluno turma[], int n);
void calcularMediasTurma(Aluno turma[], int n);
void imprimirTurma(Aluno turma[], int n);
int encontrarDestaque(Aluno turma[], int n);
Aluno calcularMedia(Aluno a);
Aluno definirConceito(Aluno a);
void ordenarPorMedia(Aluno turma[], int n);

int main() {
    int n;
    printf("Quantos alunos? ");
    if (scanf("%d", &n) != 1) return 1;
    
    Aluno turma[n];
    lerTurma(turma, n);
    calcularMediasTurma(turma, n);
    
    imprimirTurma(turma, n);
    
    int dest = encontrarDestaque(turma, n);
    if (dest != -1) {
        printf("\nDestaque: %s (Média: %.1f, Conceito: %c)\n", turma[dest].nome, turma[dest].media, turma[dest].conceito);
    }
    
    return 0;
}


void lerTurma(Aluno turma[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\n--- Aluno %d ---\n", i + 1);
        printf("Nome: ");
        scanf("%49s", turma[i].nome);
        printf("N1: ");
        scanf("%f", &turma[i].n1);
        printf("N2: ");
        scanf("%f", &turma[i].n2);
        printf("N3: ");
        scanf("%f", &turma[i].n3);
    }
}

Aluno calcularMedia(Aluno a) {
    a.media = (a.n1 + a.n2 + a.n3) / 3.0f;
    return a;
}

Aluno definirConceito(Aluno a) {
    if (a.media >= 9.0f) a.conceito = 'A';
    else if (a.media >= 7.0f) a.conceito = 'B';
    else if (a.media >= 5.0f) a.conceito = 'C';
    else a.conceito = 'D';
    return a;
}

void calcularMediasTurma(Aluno turma[], int n) {
    for (int i = 0; i < n; i++) {
        turma[i] = calcularMedia(turma[i]);
        turma[i] = definirConceito(turma[i]);
    }
}

void ordenarPorMedia(Aluno turma[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int iMaior = i;
        
        for (int j = i + 1; j < n; j++) {
            if (turma[j].media > turma[iMaior].media) {
                iMaior = j;
            }
        }

        if (iMaior != i) {
            Aluno temp = turma[i];
            turma[i] = turma[iMaior];
            turma[iMaior] = temp;
        }
    }
}

void imprimirTurma(Aluno turma[], int n) {
    printf("\n================ NOTAS DA TURMA ================\n");
    for (int i = 0; i < n; i++) {
        printf("Nome: %-15s | Média: %5.1f | Conceito: %c\n", 
               turma[i].nome, turma[i].media, turma[i].conceito);
    }
}

int encontrarDestaque(Aluno turma[], int n) {
    if (n <= 0) return -1;
    
    int indiceMelhor = 0;
    for (int i = 1; i < n; i++) {
        if (turma[i].media > turma[indiceMelhor].media) {
            indiceMelhor = i;
        }
    }
    return indiceMelhor;
}
