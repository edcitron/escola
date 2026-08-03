#include <stdio.h>

int buscaBinariaRec(int v[], int baixo, int alto, int alvo) {
    if (baixo > alto) {
        return -1;
    }
    
    int meio = baixo + (alto - baixo) / 2;
    
    if (v[meio] == alvo) {
        return meio;
    }
    if (v[meio] < alvo) {
        return buscaBinariaRec(v, meio + 1, alto, alvo);
    } else {
        return buscaBinariaRec(v, baixo, meio - 1, alvo);
    }
}

int buscaBinaria(int v[], int n, int alvo) {
    return buscaBinariaRec(v, 0, n - 1, alvo);
}

int main() {
    int v[] = {1, 3, 5, 7, 9};
    int n = 5; // Nota: corrigido o tamanho real do vetor para 5
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
