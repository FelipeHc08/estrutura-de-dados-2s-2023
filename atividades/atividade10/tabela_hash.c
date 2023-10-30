#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabela_hash.h"

#define TABLE_SIZE 100

typedef struct {
    char* chave;
    char* dado;
} Entry;

static Entry* tabela[TABLE_SIZE];

static int hash(char* chave) {
    int hash = 0;
    for (int i = 0; chave[i] != '\0'; i++) {
        hash += chave[i];
    }
    return hash % TABLE_SIZE;
}

void hash_table_init() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        tabela[i] = NULL;
    }
}

char* hash_table_get(char* chave) {
    int index = hash(chave);
    if (tabela[index] != NULL && strcmp(tabela[index]->chave, chave) == 0) {
        return tabela[index]->dado;
    }
    return NULL;
}

void hash_table_put(char* chave, char* dado) {
    int index = hash(chave);
    if (tabela[index] != NULL) {
        free(tabela[index]->dado);
    } else {
        tabela[index] = malloc(sizeof(Entry));
    }
    tabela[index]->chave = chave;
    tabela[index]->dado = dado;
}

int hash_table_contains(char* chave) {
    int index = hash(chave);
    return (tabela[index] != NULL && strcmp(tabela[index]->chave, chave) == 0);
}

void hash_table_remove(char* chave) {
    int index = hash(chave);
    if (tabela[index] != NULL) {
        free(tabela[index]->dado);
        free(tabela[index]);
        tabela[index] = NULL;
    }
}

void hash_table_destroy() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (tabela[i] != NULL) {
            free(tabela[i]->dado);
            free(tabela[i]);
        }
    }
}

