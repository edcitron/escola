#include <stdio.h>

typedef struct {
    char nome[50];
    int vitorias, empate, derrotas, pontos;
} time;

void lerTime(time t1[], int n) {
    //printf();

}

void calcularPontos(time t1[], int n) {


}

void imprimirClassificacao(time t1[], int n) {


}

int encontrarLider(time t1[], int n) {
    int iMaior = 0;
    for (int i = 0; i < n; i++) {
        if (t1[i].pontos > iMaior ) {

        }
    }
    
}

int main() {
    time t1;
}