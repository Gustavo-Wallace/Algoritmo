#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 5

struct Pilha {
    int elementos[TAMANHO];
    int topo;
};

// Função para verificar se a pilha está vazia
int estaVazia(struct Pilha* pilha) {
    return pilha->topo == -1;
}

// Função para verificar se a pilha está cheia
int estaCheia(struct Pilha* pilha) {
    return pilha->topo == TAMANHO - 1;
}

// Função para empilhar um elemento na pilha
void empilhar(struct Pilha* pilha, int elemento) {
    if (estaCheia(pilha)) {
        printf("A pilha esta cheia.\n");
    } else {
        pilha->topo++;
        pilha->elementos[pilha->topo] = elemento;
        printf("%d foi empilhado na pilha.\n", elemento);
    }
}

// Função para desempilhar um elemento da pilha
int desempilhar(struct Pilha* pilha) {
    int elemento;
    if (estaVazia(pilha)) {
        printf("A pilha esta vazia.\n");
        return -1;
    } else {
        elemento = pilha->elementos[pilha->topo];
        pilha->topo--;
    }
    return elemento;
}

int main() {
    struct Pilha pilha;
    pilha.topo = -1;

    // Empilhar elementos na pilha
    empilhar(&pilha, 10);
    empilhar(&pilha, 20);
    empilhar(&pilha, 30);

    // Desempilhar elementos da pilha
    int elemento = desempilhar(&pilha);
    printf("%d foi desempilhado da pilha.\n", elemento);

    return 0;
}
