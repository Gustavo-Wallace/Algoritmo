#include <stdio.h>
#include <stdlib.h>

int main() {
    int tam = 5;
    int l, c, mat[tam][tam], somaP = 0, somaS = 0;

    printf("Digite os elemtentos da matriz 5x5:\n");
    for(l = 0; l < tam; l++){
        for(c = 0;  c< tam; c++){
            scanf("%d",& mat[l][c]);
        }
        printf("\n");
    }

    for(l = 0; l < tam; l++){
        for(c = 0;  c< tam; c++){
            printf("%d ", mat[l][c]);
        }
        printf("\n");
    }

    printf("\n\n");
    printf("Elementos da diagonal principal:");
    for(l = 0; l < tam; l++){
        printf("%d ", mat[l][l]);
        if(mat[l][l] % 2 != 0)
            somaP = somaP + mat[l][l];
    }

    printf("\n\n");
    printf("Elementos da diagonal secundaria:");
    for(l = 0; l < tam; l++){
        printf("%d ", mat[l][tam - 1 - l]);
        if(mat[l][tam - 1 - l] % 2 != 0)
            somaS = somaS + mat[l][tam - 1 - l];
    }

    printf("\n\n");
    printf("Soma dos impares da diagonal principal: %d\n",somaP);
    printf("Soma dos impares da diagonal Secundaria: %d\n",somaS);
    printf("\n");

    if(somaP > somaS)
        printf("A soma dos impares da diagonal principal e maior.");
        else if (somaS > somaP)
            printf("A soma dos impares da diagonal secundaria e maior.");
            else printf("A soma dos impares de ambas as diagonais e igual.");
    
    return 0;
}