#include <stdio.h>

typedef struct {
    char nome[50];
    int pontos, vitorias;
} jogador;

int main() {
    int n, acimaMedia = 0, maisVitorias = 0, maisPonto = 0;
    float media = 0;
    printf("Digite  o numeros de jogadores: ");
    scanf("%d", &n);
    jogador j1[n];

    //leitura
    for (int i = 0; i < n; i++) {
        printf("\n------------ Jogador %d ------------------\n", i + 1);
        i - 1;
        printf("Digite o nome do jogador: ");
        scanf("%s", j1[i].nome);

        printf("Digite os pontos: ");
        scanf("%d", &j1[i].pontos);

        printf("Digite as vitorias: ");
        scanf("%d", &j1[i].vitorias);
        
        media += j1[i].vitorias;
    }

    media /= n;

    //IFs
    for (int i = 0; i < n; i++) {
        if (j1[i].pontos > maisPonto) {
            maisPonto = i;
        }

        
        
        if (j1[i].vitorias > maisVitorias) {
            maisVitorias = i;
        }
        
        if (j1[i].vitorias > media) {
            acimaMedia += 1;

        }
    }

    //tabela
    printf("\n---------- RESULTADO ----------------\n");
    printf("\n--- Nome  -  Pontos  -  Vitorias  ---\n");
  
        
    for (int i = 0; i < n; i++) {
        printf("    %s     ", j1[i].nome);
        printf("    %d     ", j1[i].pontos);
        printf("    %d      \n\n", j1[i].vitorias);
    }

    printf("Jogador com mais pontos: %s ( %d pontos)\n", j1[maisPonto].nome, j1[maisPonto].pontos);
    printf("Jogador com mais vitorias: %s ( %d pontos)\n", j1[maisVitorias].nome, j1[maisVitorias].pontos);
    printf("Jogadores acimas da media de vitorias: %d", acimaMedia);
    printf("\n-------------------------------------\n");
    
    
}
