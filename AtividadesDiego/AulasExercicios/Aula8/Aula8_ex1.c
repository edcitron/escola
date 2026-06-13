#include <stdio.h>

int soma(int n) {
    if (n == 0) {
        printf("Soma finalizada: ");
        return 0;
    }
    
    return n + soma(n-1);  
}

int main() {
    int num;
    printf("digite um numero: ");
    scanf("%d", &num);
    printf("%d", soma(num));
}