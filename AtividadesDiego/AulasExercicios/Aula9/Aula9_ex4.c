#include <stdio.h>

int somaVetor ( int v [] , int n ) {
    if ( n == 0) return 0; 
    return v [0] + somaVetor ( v + 1 , n - 1) ; 
}