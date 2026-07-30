#include <stdio.h>

int fatorial(int num) {
    if (num == 1) return 1;
    return num * fatorial(num - 1);
}

int main() {
    int n;
    printf("digite um numero: ");
    scanf("%d", &n);

    int result = fatorial(n);
    printf("%d", result);
}