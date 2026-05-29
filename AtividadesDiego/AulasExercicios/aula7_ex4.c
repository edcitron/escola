#include <stdio.h>

 float calc_media(nota1, nota2, nota3) {
    return (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3;
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
    int produto = base;
    for (int i = 0; i < exp; i++) {
        produto *= exp;
    }

    return produto;
}

int main() {
    int numero, exp;

    /*printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (ehPrimo(numero)) {
        printf("%d eh um numero primo.\n", numero);
    } else {
        printf("%d nao eh um numero primo.\n", numero);
    }*/

    scanf("%d", &numero);
    scanf("%d", &exp);

    int penis = potencia(numero, exp);
    printf("%d", penis);

    return 0;
}
