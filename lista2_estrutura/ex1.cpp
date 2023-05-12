#include <stdio.h>

#define MIN_NUMEROS 10
#define MAX_NUMEROS 20
#define MIN_VALOR 1
#define MAX_VALOR 99

void le_valida_num(int* num) {
    do {
        printf("Informe um numero entre %d e %d (ou 0 para sair): ", MIN_VALOR, MAX_VALOR);
        scanf("%d", num);
        if(*num != 0 && (*num < MIN_VALOR || *num > MAX_VALOR)
            printf("Numero invalido!");
    } while (*num != 0 && (*num < MIN_VALOR || *num > MAX_VALOR));
}

void bubble_sort(int numeros[], int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }
}

int main(){
    int numeros[MAX_NUMEROS];
    int n, i;
    char continuar;

    do {
        printf("Quantos numeros deseja informar (entre %d e %d)? ", MIN_NUMEROS, MAX_NUMEROS);
        scanf("%d", &n);
        if(n < MIN_NUMEROS || n > MAX_NUMEROS)
            printf("Quantidade de numeros invalido!");
    } while (n < MIN_NUMEROS || n > MAX_NUMEROS);

    for (i = 0; i < n; i++) {
        le_valida_num(&numeros[i]);

        if (i == MIN_NUMEROS - 1) {
            printf("Você já informou os 10 primeiros números. Deseja continuar (s/n)? ");
            scanf(" %c", &continuar);
            if (continuar == 'n' || continuar == 'N') {
                n = i + 1;
                break;
            }
        }

        if (numeros[i] == 0) {
            n = i;
            break;
        }
    }

    bubble_sort(numeros, n);

    printf("Números ordenados:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
