#include <stdio.h>

void regressiva(int n) {
    if (n == 0) printf("Vai"); return;
    
    printf("%d  ", n);
    regressiva(n - 1);
    
}

void progressiva(int n) {
    
    if (n == 0) {
        printf("Vai");
    }
    
    progressiva(n + 1);
    printf("%d", n);
}

int main() {
    int n;
    printf("Limite: ");
    scanf("%d", &n);    
    regressiva(n);
    progressiva(n);    
}
