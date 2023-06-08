#include <stdio.h>

// Função de busca binária em um vetor ordenado
int buscaBinaria(int vetor[], int esquerda, int direita, int elemento) {
    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        if (vetor[meio] == elemento) {
            return meio; // Retorna o índice onde o elemento foi encontrado
        }
        if (vetor[meio] < elemento) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }
    return -1; // Retorna -1 se o elemento não foi encontrado
}

int main() {
    int vetor[] = {2, 4, 6, 8, 10};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int elemento = 6;

    int indice = buscaBinaria(vetor, 0, tamanho - 1, elemento);
    if (indice != -1) {
        printf("Elemento encontrado no indice %d\n", indice);
    } else {
        printf("Elemento nao encontrado\n");
    }

    return 0;
}
