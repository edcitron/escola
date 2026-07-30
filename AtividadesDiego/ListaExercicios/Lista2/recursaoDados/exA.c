#include <stdio.h>

int somaDigitos(int num) {
    if(num == 0) return 0;

    return num % 10 + somaDigitos(num / 10);
}

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("%d\n", somaDigitos(n));
  
}