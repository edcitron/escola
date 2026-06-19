#include <stdio.h>

void regressiva(int n) {
    if (n == 0) {
        printf("Vai\n"); 
        return;
    }
    
    printf("%d  ", n);
    regressiva(n - 1);
}

void progressiva(int n) {
    if (n == 0) {
        printf("Vai  ");
        return;
    }
    
    progressiva(n - 1);
    printf("%d  ", n);
}

int main() {
    int n;
    printf("Limite: ");
    if (scanf("%d", &n) != 1) return 1;    
    
    printf("\n--- Regressiva ---\n");
    regressiva(n);
    
    printf("\n--- Progressiva ---\n");
    progressiva(n);    
    
    printf("\n");
    return 0;
}
