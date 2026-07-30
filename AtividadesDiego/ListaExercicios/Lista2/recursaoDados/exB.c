#include <stdio.h>

int contarChar(char s[], int i, char c) {
  if(s[i] == '\0') {
    return 0;
  }

  if (s[i] == c) {
        return 1 + contarChar(s, i + 1, c); 
    } else {
        return 0 + contarChar(s, i + 1, c);   
    }
}

int main() {
    char p[100];
    char letra;

    printf("Digite uma palavra: ");
    scanf("%99s", p);

    printf("Digite a letra que quer contar: ");
    scanf(" %c", &letra); 

    int result= contarChar(p, 0, letra);

    printf("A letra '%c' aparece %d vezes.", letra, result);
    return 0;
}