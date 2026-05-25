#include <stdio.h>

typedef struct {
    int gols;
    char nome[50];
} time;

int main() {
    time time1, time2;

    printf("Digite o nome do time: ");
    scanf("%s", time1.nome);

    printf("Digite o numero de gols: ");
    scanf("%d", &time1.gols);

    printf("Digite o nome do segundo time: ");
    scanf("%s", time2.nome);

    printf("Digite o numero de gols do segundo time: ");
    scanf("%d", &time2.gols);

    if (time1.gols > time2.gols) {
        printf("O time vencedor e: %s\n", time1.nome);
    } else if (time2.gols > time1.gols) {
        printf("O time vencedor e: %s\n", time2.nome);
    } else {
        printf("Empate entre %s e %s\n", time1.nome, time2.nome);
    }
    return 0;
}