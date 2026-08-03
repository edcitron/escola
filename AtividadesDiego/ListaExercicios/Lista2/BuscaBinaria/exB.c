#include <stdio.h>

int buscaBinaria(int v[], int n, int alvo) {
    int baixo = 0;
    int alto = n - 1;
    
    while (baixo <= alto) {
        int meio = baixo + (alto - baixo) / 2;
        
        if (v[meio] == alvo) return meio;
        if (v[meio] < alvo) {
            baixo = meio + 1; 
        } else {
            alto = meio - 1;
        }
    }
    
    return -1; 
}

int main() {
    int v[] = {1, 3, 5, 7, 9}; 
    int n = 8;
    int alvo;
    
    printf("Buscar: ");
    scanf("%d", &alvo);
    
    int idx = buscaBinaria(v, n, alvo);
    
    if (idx >= 0) {
        printf("Encontrado na posicao %d\n", idx);
    } else {
        printf("Nao encontrado\n");
    }
    
    return 0;
}
