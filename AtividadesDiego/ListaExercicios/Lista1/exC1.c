#include <stdio.h>


float soma(float a, float b) {
    return a + b;
}

float subtracao(float a, float b) {
    return a - b;
}

float multiplicacao(float a, float b) {
    return a * b;
}

float divisao(float a, float b) {
    return a / b;
}
int main() {
    float num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Soma: %.2f\n", soma(num1, num2));
    printf("Subtracao: %.2f\n", subtracao(num1, num2));
    printf("Multiplicacao: %.2f\n", multiplicacao(num1, num2));
    if (num2 != 0) {
        printf("Divisao: %.2f\n", divisao(num1, num2));
    } else {
        printf("Não existe divisao por zero\n");
    }

    return 0;

}