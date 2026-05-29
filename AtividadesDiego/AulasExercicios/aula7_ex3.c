#include <stdio.h>

int potenciaCubica(int base) {
    int produto = base * base;
    return produto; 
}

int fatorial(int n) {
    for (int i = n - 1; i > 1;i--) {
        
        n = n * i;
    }
    


}

int verPrimo(int primo){
    for (int i = 2; i < primo; i++) {
        if (primo % i == 0 ) {
            return 0;
            break;
        }
    }
    return 1; 
}

int main() {
    int base, exp;
    printf("Digite um numero: ");
    scanf("%d", &base);

    int resultado = potenciaCubica(base);
    int fator = fatorial(base);
    int primo = verPrimo(base);
    printf("Potencia: %d\n", resultado);
    printf("Fatorial: %d\n", fator);
    //printf("verifacao : %d\n", primo);

    if (verPrimo(base)) {
        printf("primo.\n", base);
    } else {
        printf("nao primo.\n", base);
    }
    printf("\n");
        
        
    return 0;
}