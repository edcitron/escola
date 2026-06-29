//Maior elemento do vetor
#include <stdio.h>

int maiorValor(int vet[], int num) {
    if (num == 0) return 0;
    if (num == 1) return vet[0];
    
    int maior = maiorValor(vet + 1, num - 1);
    if (vet[0] < maior) {
        return maior;
    } else return vet[0];
} 

int main() {
    int v[8] = {3, 7, 79, 32, 56, 1, 7, 5};
    int n = 8; 
    // poderia se usar sizeof, mas como não usamos obtei não usar também 

    int m = maiorValor(v, n);
    printf("o maior valor e: %d", m);
}
