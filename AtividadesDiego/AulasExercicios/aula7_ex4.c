#include <stdio.h>

float CalcMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

int ehPrimo(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
            break;
        }
    }

    return 1; 
}

int potencia(int base, int exp) {
    int produto = 1;
    for (int i = 0; i < exp; i++) {
        produto = produto * base;
    } 

    return produto;
}

int main() {
    for (int i = 0; i < 1;) {
        int opcao;
        printf("===  Calculadora ===\n");
        printf("1. Calcular media de 3 notas\n");
        printf("2. Verificar se numero e primo\n");
        printf("3. Calcular potencia\n");
        printf("0. Sair\n");
        printf("opcao : ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            float nota1, nota2, nota3, resultado;
            printf("Digite a primeira nota:");
            scanf("%f", &nota1);
            printf("Digite a segunda nota:");
            scanf("%f", &nota2);
            printf("Digite a terceira nota:");
            scanf("%f", &nota3);
            resultado = CalcMedia(nota1, nota2, nota3);
            printf("Media: %.2f\n", resultado);
            printf("\n");
        } 
        else if (opcao == 2) {
            int numero;

            printf("Digite um numero inteiro: ");
            scanf("%d", &numero);

            if (ehPrimo(numero)) {
                printf("primo.\n", numero);
            } else {
                printf("nao primo.\n", numero);
            }
            printf("\n");
        }

        else if (opcao == 3) {
            int numero, exp;

            printf("Digite a base: ");
            scanf("%d", &numero);
            printf("Digite o expoente: ");
            scanf("%d", &exp);

            int resultado = potencia(numero, exp);
            printf("%d\n", resultado);

            printf("\n");
        }

        else if (opcao == 0) {
            printf("Programa encerrado.");
            return 0;
        }
    }
}