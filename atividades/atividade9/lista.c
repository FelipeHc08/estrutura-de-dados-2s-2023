// lista.c

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

No* lista_criar() {
    No* cabeca = (No*)malloc(sizeof(No));
    cabeca->proximo_no = NULL;
    return cabeca;
}

void lista_inserir_no(No* L, float valor) {
    No* novo_no = (No*)malloc(sizeof(No));
    novo_no->valor = valor;
    novo_no->proximo_no = L->proximo_no;
    L->proximo_no = novo_no;
}

void lista_imprimir(No* L) {
    No* atual = L->proximo_no;
    while (atual != NULL) {
        printf("%.2f ", atual->valor);
        atual = atual->proximo_no;
    }
    printf("\n");
}

void lista_liberar(No* L) {
    while (L->proximo_no != NULL) {
        No* no_remover = L->proximo_no;
        L->proximo_no = no_remover->proximo_no;
        free(no_remover);
    }
    free(L);
}

void lista_inserir_no_ordenado(No* L, float valor) {
    No* novo_no = (No*)malloc(sizeof(No));
    novo_no->valor = valor;
    novo_no->proximo_no = NULL;

    No* atual = L;
    while (atual->proximo_no != NULL && atual->proximo_no->valor < valor) {
        atual = atual->proximo_no;
    }
    novo_no->proximo_no = atual->proximo_no;
    atual->proximo_no = novo_no;
}
