#include <stdio.h>

// Função recursiva com o novo nome solicitado
int fib(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int num;

    printf("Digite quantos numeros da sequencia de Fibonacci deseja ver: ");
    scanf("%d", &num);

    printf("Fibonnaci:\n", num);

    for (int i = 0; i < num; i++) {
        printf("%d ", fib(i));
    }
    
    printf("\n");
    return 0;
}
