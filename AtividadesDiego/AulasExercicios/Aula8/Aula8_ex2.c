#include <stdio.h> 

int potencia(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    
    return  base * potencia(base, exp-1);
}

int main() {
    int base, exp;

    printf("digite a base: ");
    scanf("%d", &base);
    printf("digite o expoente: ");
    scanf("%d", &exp);
    printf("%d", potencia(base, exp));
}