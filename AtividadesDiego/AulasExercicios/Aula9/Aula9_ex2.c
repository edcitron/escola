#include <stdio.h>

void inverter(char string[], int inicio, int fim) {
    if (inicio >= fim) return;

    char troca;
    troca = string[inicio];
    string[inicio] = string[fim];
    string[fim] = troca;
    inverter(string, inicio + 1, fim - 1);
}

int main() {
    char palavra[] = "EXECUTAR";
    inverter(palavra, 0, 7);
    printf("%s", palavra);
}