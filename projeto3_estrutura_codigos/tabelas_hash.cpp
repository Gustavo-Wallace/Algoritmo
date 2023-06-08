#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 10

struct Node {
    int chave;
    int dado;
    struct Node* proximo;
};

// Função para criar um novo nó da tabela hash
struct Node* criarNo(int chave, int dado) {
    struct Node* novoNo = (struct Node*)malloc(sizeof(struct Node));
    novoNo->chave = chave;
    novoNo->dado = dado;
    novoNo->proximo = NULL;
    return novoNo;
}

// Função para inserir um elemento na tabela hash
void inserir(struct Node** tabelaHash, int chave, int dado) {
    int indice = chave % TAMANHO;
    if (tabelaHash[indice] == NULL) {
        tabelaHash[indice] = criarNo(chave, dado);
    } else {
        struct Node* atual = tabelaHash[indice];
        while (atual->proximo != NULL) {
            atual = atual->proximo;
        }
        atual->proximo = criarNo(chave, dado);
    }
}

// Função para buscar um elemento na tabela hash
int buscar(struct Node** tabelaHash, int chave) {
    int indice = chave % TAMANHO;
    struct Node* atual = tabelaHash[indice];
    while (atual != NULL) {
        if (atual->chave == chave) {
            return atual->dado;
        }
        atual = atual->proximo;
    }
    return -1;
}

// Função para exibir a tabela hash
void exibir(struct Node** tabelaHash) {
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d: ", i);
        struct Node* atual = tabelaHash[i];
        while (atual != NULL) {
            printf("(%d, %d) ", atual->chave, atual->dado);
            atual = atual->proximo;
        }
        printf("\n");
    }
}

int main() {
    struct Node* tabelaHash[TAMANHO] = { NULL };

    // Inserir elementos na tabela hash
    inserir(tabelaHash, 10, 100);
    inserir(tabelaHash, 20, 200);
    inserir(tabelaHash, 30, 300);

    printf("Tabela Hash:\n");
    // Exibir a tabela hash
    exibir(tabelaHash);

    // Buscar um elemento na tabela hash
    int dadoBuscado = buscar(tabelaHash, 20);
    printf("Dado da chave 20: %d\n", dadoBuscado);

    return 0;
}
