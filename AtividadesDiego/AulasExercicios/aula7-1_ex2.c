#include <stdio.h>

typedef struct {
    char nome[50];
    int vitorias, empate, derrotas, pontos;
} time;

void lerTime(time use[], int n) {
     for (int i = 0; i < n; i++) {
        printf("\n------------ produto %d ------------------\n", i + 1);
        // i - 1;
        printf("Digite o nome do time: ");
        scanf("%49s", use[i].nome);
        
        printf("\nDigite a quantidades de vitorias do time: ");
        scanf("%d", &use[i].vitorias);

        printf("\nDigite a quantidade de empates do time: ");
        scanf("%d", &use[i].empate);

        printf("\nDigite a quantidade de derrotas do time: ");
        scanf("%d", &use[i].derrotas);

    }  
}

void calcularPontos(time use[], int n) {
    use->pontos = 0;
    for (int i = 0; i < n; i++) {
        use[i].pontos = use[i].vitorias * 3;
        use[i].pontos += use[i].empate;
    }
}

void imprimirClassificacao(time use[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\n------------ time %d ------------------\n", i + 1);
        printf("Vitorias : %d", use[i].vitorias);
        printf("\nEmpates : %d", use[i].empate);
        printf("\nDerrota : %d", use[i].derrotas);
        printf("\nPontos : %d", use[i].pontos);
    }    
}

int encontrarLider(time use[], int n) {
    int iMaior = 0;
    for (int i = 0; i < n; i++) {
        if (use[i].pontos > iMaior ) {
            iMaior = i;
        }
    }
    printf("\n\nMelhor Timexx: %s", use[iMaior].nome);
}

int main() {
    int n;
    printf("Digite a quantidade de times: ");
    scanf("%d", &n);
    time use[n];
    lerTime(use, n);
    calcularPontos(use, n);
    imprimirClassificacao(use, n);
    encontrarLider(use, n);
}