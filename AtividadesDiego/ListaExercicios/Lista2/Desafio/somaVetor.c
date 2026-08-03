#include <stdio.h>

int somaVetor(int v[], int n) {
    if (n == 0) return 0;
    return v[0] + somaVetor(v + 1, n - 1);
}

int main() {
    int v[5];
    int somaRec = 0;
    int somaFor = 0;

    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    somaRec = somaVetor(v, 5);

    for (int i = 0; i < 5; i++) {
        somaFor += v[i];
    }

    printf("\n--- Resultados ---\n");
    printf("Soma recursiva: %d\n", somaRec);
    printf("Soma com for:   %d\n", somaFor);
    return 0;
}
