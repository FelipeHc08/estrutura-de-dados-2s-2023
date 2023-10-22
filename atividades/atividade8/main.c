#include <stdio.h>
#include "lista.h"

int main() {
    No* lista = lista_criar();

    lista_inserir_no(lista, no('A', NULL));
    lista_inserir_no(lista, no('B', NULL));
    lista_inserir_no(lista, no('C', NULL));
    lista_inserir_no(lista, no('B', NULL));

    printf("Lista Original: ");
    lista_imprimir(lista);
    printf("\n");

    char busca = 'B';
    printf("Verificar existência de '%c': %d\n", busca, lista_verificar_existencia(lista, busca));
    printf("Quantidade de ocorrencias de '%c': %d\n", busca, lista_verificar_ocorrencias(lista, busca));

    printf("Lista Inversa: ");
    lista_imprimir_inversa(lista);
    printf("\n");

    lista_inserir_no_i(lista, 1, 'D');
    printf("Inserir 'D' na posição 1: ");
    lista_imprimir(lista);

    lista_remover_no_i(lista, 2);
    printf("Remover elemento na posição 2: ");
    lista_imprimir(lista);

    lista_remover_no(lista, 'B');
    printf("Remover todos os 'B': ");
    lista_imprimir(lista);

    No* copia_lista = lista_copiar(lista);
    printf("Cópia da Lista Original: ");
    lista_imprimir(copia_lista);

    No* lista_concatenada = lista_criar();
    lista_inserir_no(lista_concatenada, no('X', NULL));
    lista_inserir_no(lista_concatenada, no('Y', NULL));
    lista_inserir_no(lista_concatenada, no('Z', NULL));

    printf("Lista Concatenada: ");
    lista_concatenar(lista, lista_concatenada);
    lista_imprimir(lista);

    lista_liberar(lista);
    lista_liberar(copia_lista);
    lista_liberar(lista_concatenada);

    return 0;
}
