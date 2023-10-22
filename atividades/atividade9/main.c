#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lista.h"

#define FILENAME "1kk_rand_float.csv"

double calcula_tempo_medio(void (*funcao_inserir)(No*, float), No* lista, const char* filename) {
    FILE* arquivo = fopen(filename, "r");
    if (!arquivo) {
        perror("Erro ao abrir o arquivo.");
        exit(1);
    }

    clock_t inicio, fim;
    double tempo_total = 0;
    int total_valores = 0;

    float valor;
    while (fscanf(arquivo, "%f", &valor) == 1) {
        inicio = clock();
        funcao_inserir(lista, valor);
        fim = clock();
        tempo_total += (double)(fim - inicio) / CLOCKS_PER_SEC;
        total_valores++;
    }

    fclose(arquivo);
    return tempo_total / total_valores;
}

int main() {
    No* lista_nao_ordenada = lista_criar();
    No* lista_ordenada = lista_criar();

    double tempo_medio_nao_ordenada = calcula_tempo_medio(lista_inserir_no, lista_nao_ordenada, FILENAME);
    double tempo_medio_ordenada = calcula_tempo_medio(lista_inserir_no_ordenado, lista_ordenada, FILENAME);

    printf("Tempo médio de inserção em lista não ordenada: %.6f segundos\n", tempo_medio_nao_ordenada);
    printf("Tempo médio de inserção em lista ordenada: %.6f segundos\n", tempo_medio_ordenada);

    lista_liberar(lista_nao_ordenada);
    lista_liberar(lista_ordenada);

    return 0;
}
