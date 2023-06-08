#include <stdio.h>

// Função de busca sequencial em um vetor
int buscaSequencial(int vetor[], int tamanho, int elemento) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == elemento) {
            return i; // Retorna o índice onde o elemento foi encontrado
        }
    }
    return -1; // Retorna -1 se o elemento não foi encontrado
}

int main() {
    int vetor[] = {2, 4, 6, 8, 10};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int elemento = 6;

    int indice = buscaSequencial(vetor, tamanho, elemento);
    if (indice != -1) {
        printf("Elemento encontrado no indice %d\n", indice);
    } else {
        printf("Elemento nao encontrado\n");
    }

    return 0;
}
