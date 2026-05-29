 #include <stdio.h>

typedef struct {
    char nome[50];
    float preco;
    int quantidade;
} infoProduto;

void linha() {
    printf("\n-------------------------------------------\n");
}

int main() {
    int nP;
    int iMaior = 0;
    printf("Digite a quantidade de produtos a adicionar: ");
    scanf("%d", &nP);
             
    infoProduto p1[nP];
    float total[nP];

    // entrada de itens
    for (int i = 0; i < nP; i++) {
        printf("\n------------ Produto : %d ------------\n", i + 1);
        printf("\nDigite o nome do produto: ");
        scanf("%s", p1[i].nome);

        printf("\nDigite a quantidade: \n");
        scanf("%d", &p1[i].quantidade);

        printf("\nDigite o preco: \n");
        scanf("%f", &p1[i].preco);

        total[i] = p1[i].preco * p1[i].quantidade;
    }

    //calculo do total geral e maior preço
    float totalGeral = 0;
    for (int i = 0; i < nP; i++) {
        totalGeral = totalGeral + total[i];

    }

    for (int i = 0; i < nP; i++) {
        if (total[i] > iMaior) {
            iMaior = total[i];
        }
    }

    //tabela - 5 espaços de distancia
   printf("Produto     Preco     Qtd     Total");
   linha();
   for (int i = 0; i < nP; i++) {
        printf("%s     ",  p1[i].nome);
        printf("R$%.2f     ",  p1[i].preco);
        printf("%d     ",  p1[i].quantidade);
        printf("R$%.2f     ", total[i]);
        printf("\n");
   }
   linha();
   printf("Total geral : R$%.2f", totalGeral);
   printf("Maior estoque : %s (R$%.2f)", p1[iMaior],iMaior);
  
    return 0;

}