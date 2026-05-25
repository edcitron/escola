#include <stdio.h>

typedef struct {
    char nome[50];
    int quantidade;
    float preco;
} produto;

int main() {
    produto produto1;
    int total;
    int desconto;

    printf("Digite o nome do produto: ");
    scanf("%s", produto1.nome);

    printf("Digite a quantidade: ");
    scanf("%d", &produto1.quantidade);

    printf("Digite o preco: ");
    scanf("%f", &produto1.preco);
    total = produto1.quantidade * produto1.preco;
    desconto = total * 0.9; // 10% de desconto


    printf("\n------------------------------\n");
    printf("Produto: %s\n", produto1.nome);  
    printf("Total em estoque: %.2f\n", (float)total);
    printf("com 10%% de desconto: %.2f\n", (float)desconto);
    
    return 0;
}