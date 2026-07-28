#include <stdio.h>

typedef struct {
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
} baseinfo;

float CalcularMedia(baseinfo aluno) {
    return (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3;
}

char definirConceito (float media) {
    if ( media >= 9.0) return 'A';
    if ( media >= 7.0) return 'B';
    if ( media >= 5.0) return 'C';
return 'D';
}

void imprimirResultado(baseinfo aluno) {
    float media = CalcularMedia(aluno);
    char conceito = definirConceito(media);
    printf("\n------------------------------\n");
    printf("Aluno: %s\n", aluno.nome);
    printf("Media: %.2f\n", media);
    printf("Conceito: %c\n", conceito);
    printf("\n------------------------------\n");
}



int main() {
    int n;
    int Imaior = 0;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);
    baseinfo aluno[n];
    for (int i = 0; i < n; i++) {
        printf("\n------------ aluno %d ------------------\n", i + 1);
        printf("Digite o nome do aluno: ");
        scanf("%s", aluno[i].nome);

        printf("Digite a primeira nota do aluno: ");
        scanf("%f", &aluno[i].nota1);

        printf("Digite a segunda nota do aluno: ");
        scanf("%f", &aluno[i].nota2);

        printf("Digite a terceira nota do aluno: ");
        scanf("%f", &aluno[i].nota3);
        
    }

    for (int i = 0; i < n; i++) {
      CalcularMedia(aluno[i]);
        if (CalcularMedia(aluno[i]) > CalcularMedia(aluno[Imaior])) {
            Imaior = i;
        }
    }
    
    for (int i = 0; i < n; i++) {
        imprimirResultado(aluno[i]);
    }
    
    
    //ranking a nota por ordem crescente
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (CalcularMedia(aluno[j]) > CalcularMedia(aluno[j + 1])) {
                baseinfo temp = aluno[j];
                aluno[j] = aluno[j + 1];
                aluno[j + 1] = temp;
            }
        }
    }  
    
    return 0;
}
