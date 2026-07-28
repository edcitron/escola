#include <stdio.h>

typedef struct {
    char nome[50];
    int quantidade;
    float preco;
} baseinfo;

int main() {

    int n;
    int Vtotal = 0;
    int MaiorValor = 0;
    printf("Digite a quantidade de produtos: ");
    scanf("%d", &n);
    baseinfo produto[n];

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
        printf("\n------------------------------\n");
        printf("Produto: %s\n", produto[i].nome);  
        printf("Total em estoque: %.2f\n", (float)produto[i].quantidade * produto[i].preco);
        Vtotal += produto[i].preco * produto[i].quantidade;
        if ( produto [i].preco > produto[MaiorValor].preco)  {
              MaiorValor = i ;
        }
    }
    
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
        printf("Preco: %.2f       ", produto[i].preco);
    }

    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("Valor total do produto: %.2f"     , Vtotal);
    }

    printf("\n");

    
    printf("Produto mais caro: %s", produto[MaiorValor].nome);
    
    printf("\n-----------------------------------------\n");
    
    return 0;
}

