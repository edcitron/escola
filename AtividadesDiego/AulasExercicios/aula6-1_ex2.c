#include <stdio.h>

typedef struct {
    char nome[50];
    int quantidade;
    float preco;
} baseinfo;

int main() {

    int n, iMenor = 0;
    float total;

    printf("Digite a quantidade de produtos: ");
    scanf("%d", &n);
    baseinfo produto[n];
    float Vtotal[n];
    for (int i = 0; i < n; i++) {
        printf("\n------------ produto %d ------------------\n", i + 1);
        printf("Digite o nome do produto: ");
        scanf("%s", produto[i].nome);

        printf("Digite a quantidade: ");
        scanf("%d", &produto[i].quantidade);

        printf("Digite o preco: ");
        scanf("%f", &produto[i].preco);
        
    }
    
    // soma do valor total dos produtos
    for (int i = 0; i < n; i++) {
        Vtotal[i] += produto[i].preco * produto[i].quantidade;
        total += Vtotal[i];
        if ( produto [i].preco < iMenor)  {
               iMenor = i;
        }
    }
    
    printf("%.2f", total);
    printf("\n-----------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("Produto: %s      ", produto[i].nome);
    }

    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("Estoque: %d      ", produto[i].quantidade);
    }

    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("Preco: R$%.2f       ", produto[i].preco);//erro de exibição do segundo item, lixo de memoria
    }

    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("Valor total: %.2f     ", Vtotal[i]);
    }

    printf("\n");
   
    printf("Produto mais barato: R$%s ( %.2f)\n", produto[iMenor].nome, produto[iMenor].preco);
    printf("Preco do estoque: R$%.2f", total);// erro na variavel total
    printf("\n-----------------------------------------\n");
    
    return 0;
}

