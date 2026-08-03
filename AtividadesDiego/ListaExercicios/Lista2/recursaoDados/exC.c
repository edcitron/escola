#include <stdio.h>

int ehPalindromo(char string[], int inicio, int fim) {
    if(inicio >= fim) return 1;
    if(string[inicio] != string[fim]) return 0;
    return ehPalindromo(string, inicio+ 1, fim - 1);
}

int main() {
    char palavra[100];

    printf("Digite uma palavra : ");
    scanf("%s", palavra);
    int fim = palavra - 1;

    if (ehPalindromo(palavra, 0, fim)) {
        printf("A palavra '%s' e um palindromo!\n", palavra);
    } else {
        printf("A palavra '%s' NAO e um palindromo!\n", palavra);
    }

    return 0;
}