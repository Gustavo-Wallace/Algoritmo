#include <stdio.h>
#include <stdlib.h>

struct Node {
    int valor;
    struct Node* proximo;
};

// Função para criar um novo nó da lista encadeada
struct Node* criarNo(int valor) {
    struct Node* novoNo = (struct Node*)malloc(sizeof(struct Node));
    novoNo->valor = valor;
    novoNo->proximo = NULL;
    return novoNo;
}

// Função para inserir um elemento no início da lista encadeada
void inserir(struct Node** cabeca, int valor) {
    struct Node* novoNo = criarNo(valor);
    novoNo->proximo = *cabeca;
    *cabeca = novoNo;
}

// Função para exibir os elementos da lista encadeada
void exibir(struct Node* cabeca) {
    struct Node* atual = cabeca;
    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->proximo;
    }
    printf("\n");
}

int main() {
    struct Node* cabeca = NULL;

    // Inserir elementos na lista encadeada
    inserir(&cabeca, 10);
    inserir(&cabeca, 20);
    inserir(&cabeca, 30);

    printf("Lista Encadeada: ");
    // Exibir os elementos da lista encadeada
    exibir(cabeca);

    return 0;
}
