#include <stdio.h>

typedef struct {
    char nome[50];
    float pontos;
} jogador ;

int main() {
    int n;
    jogador jogador1[n];

   printf("Digite a quantidade de jogadores: ");
   scanf("%d", &n);

   for (int i = 0; i < n; i++) {
        printf("\n------------ jogador %d ------------------\n", i + 1);
        printf("Digite o nome do jogador: ");
        scanf("%s", jogador1[i].nome);

        printf("Digite os pontos do jogador: ");
        scanf("%f", &jogador1[i].pontos);
        
    }

    printf("\n------------------------------\n");
    int maior = 0;
    for (int i = 0; i < n; i++) {
        if (jogador1[i].pontos > jogador1[maior].pontos) {
            maior = i;
        }
    }

    int menor = 0;
    for (int i = 0; i < n; i++) {
        if (jogador1[i].pontos < jogador1[menor].pontos) {
            menor = i;
        }
    }

    printf("Jogador com mais pontos: %s\n", jogador1[maior].nome);
    printf("Jogador com menos pontos: %s\n", jogador1[menor].nome);

    return 0;
}