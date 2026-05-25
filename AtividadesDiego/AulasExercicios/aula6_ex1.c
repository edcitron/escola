#include <stdio.h>

typedef struct {
    char nome[50];
    float preco;
    int quantidade;
} infoProduto;

int main() {
    infoProduto produto;
    float valorTotal;
    printf("Digite o nome do produto: ");
    scanf("%s", produto.nome);
    printf("Digite o preco do produto: ");

    scanf("%f", &produto.preco);
    printf("Digite a quantidade do produto: ");
    scanf("%d", &produto.quantidade);
    valorTotal = produto.preco * produto.quantidade;

    printf("Produto: %s\n", produto.nome);
    printf("Preco: %.2f\n", produto.preco);
    printf("Quantidade: %d\n", produto.quantidade);
    printf("\n------------------------------\n");
    printf("Valor Total em estoque: %.2f\n", valorTotal);
    return 0;
}