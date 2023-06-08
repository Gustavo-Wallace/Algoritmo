#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 5

struct Fila {
    int elementos[TAMANHO];
    int frente;
    int tras;
};

// Função para verificar se a fila está vazia
int estaVazia(struct Fila* fila) {
    return fila->frente == -1;
}

// Função para verificar se a fila está cheia
int estaCheia(struct Fila* fila) {
    return (fila->tras + 1) % TAMANHO == fila->frente;
}

// Função para enfileirar um elemento na fila
void enfileirar(struct Fila* fila, int elemento) {
    if (estaCheia(fila)) {
        printf("A fila esta cheia.\n");
    } else {
        if (fila->frente == -1) {
            fila->frente = 0;
        }
        fila->tras = (fila->tras + 1) % TAMANHO;
        fila->elementos[fila->tras] = elemento;
        printf("%d foi enfileirado na fila.\n", elemento);
    }
}

// Função para desenfileirar um elemento da fila
int desenfileirar(struct Fila* fila) {
    int elemento;
    if (estaVazia(fila)) {
        printf("A fila esta vazia.\n");
        return -1;
    } else {
        elemento = fila->elementos[fila->frente];
        if (fila->frente == fila->tras) {
            fila->frente = -1;
            fila->tras = -1;
        } else {
            fila->frente = (fila->frente + 1) % TAMANHO;
        }
    }
    return elemento;
}

int main() {
    struct Fila fila;
    fila.frente = -1;
    fila.tras = -1;

    // Enfileirar elementos na fila
    enfileirar(&fila, 10);
    enfileirar(&fila, 20);
    enfileirar(&fila, 30);

    // Desenfileirar elementos da fila
    int elemento = desenfileirar(&fila);
    printf("%d foi desenfileirado da fila.\n", elemento);

    return 0;
}
