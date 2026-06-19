#include <stdio.h>

typedef struct {
    char nome[50];
    int quantidade;
    float preco, totalEstoque;
} info;

void lerProduto(info p1[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\n------------ produto %d ------------------\n", i + 1);
        // i - 1;
        printf("Digite o nome do produto: ");
        scanf("%49s", p1[i].nome);

        printf("Digite a quantidade: ");
        scanf("%d", &p1[i].quantidade);

        printf("Digite o preco: ");
        scanf("%f", &p1[i].preco);
    }  
}

void calcularEstoque(info p1[], int n) {
    for (int i = 0; i < n; i++) {
       p1[i].totalEstoque = p1[i].preco * p1[i].quantidade; 
    }
    

}

void imprimirEstoque(info p1[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\n------------ produto %d ------------------\n", i + 1);
        printf("Nome: %s\n", p1[i].nome);
        printf("Quantidade: %d\n", p1[i].quantidade);
        printf("Preco: %.2f\n", p1[i].preco);
        printf("Preco de estoque: %.2f\n", p1[i].totalEstoque);
    } 

}

int encontrarMaiorEstoque(info p1[], int n) {
    int iMaior;
    for (int i = 0; i < n; i++) {
        if (p1[i].totalEstoque > iMaior){
            iMaior = i;
        }
    }
    return iMaior;
}

int encontrarMenorPreco(info p1[], int n) {
    int iMenor;
    for (int i = 0; i < n; i++) {
        if (p1[i].preco < iMenor ) {
            iMenor = i;
        }
    }
    return iMenor;  
}

int main() {
    int n;
    printf("Digite a quantidade de produtos a inserir no sistema: ");
    scanf("%d", &n);
    info pin1[n];

    lerProduto(pin1, n);
    calcularEstoque(pin1, n);
    int maiorestoque = encontrarMaiorEstoque(pin1, n);
    int menorpreco = encontrarMenorPreco(pin1, n);
    imprimirEstoque(pin1, n);
    //! erro de exibiçõo
    printf("\n================ RESUMO ================\n");
    printf("Maior estoque: %s (%d unidades)\n", pin1[maiorestoque].nome, pin1[maiorestoque].preco);
    printf("Menor preco: %s (R$%d)\n", pin1[menorpreco].nome, pin1[menorpreco].preco);

    return 0;
}