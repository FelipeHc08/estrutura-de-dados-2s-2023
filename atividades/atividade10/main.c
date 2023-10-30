#include <stdio.h>
#include "tabela_hash.h"

int main() {
    hash_table_init();

    hash_table_put("chave1", "valor1");
    hash_table_put("chave2", "valor2");
    hash_table_put("chave3", "valor3");

    printf("Valor associado a chave 'chave1': %s\n", hash_table_get("chave1"));
    printf("Valor associado a chave 'chave2': %s\n", hash_table_get("chave2"));
    printf("Valor associado a chave 'chave4': %s\n", hash_table_get("chave4"));

    hash_table_remove("chave2");

    printf("Valor associado a chave 'chave2' após remoção: %s\n", hash_table_get("chave2"));

    hash_table_destroy();
    return 0;
}
