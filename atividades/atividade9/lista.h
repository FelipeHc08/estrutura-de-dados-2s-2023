// lista.h

#ifndef LISTA_H
#define LISTA_H

typedef struct No {
    float valor;
    struct No* proximo_no;
} No;

No* lista_criar();
void lista_inserir_no(No* L, float valor);
void lista_imprimir(No* L);
void lista_liberar(No* L);
void lista_inserir_no_ordenado(No* L, float valor);

#endif
