/*
Exercício 4 - Contar a quantidade de ocorrências de um elemento no array. 
Escreva uma função que recebe um array de números inteiros e um número inteiro de busca, 
e retorna a quantidade de vezes que o número de busca aparece no array.

Exemplo: conta_int_array([5, 7, 9, 6, 7, 11, 6, 5], 7)
Saída: 2
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int array[8] = {5, 7, 9, 6, 7, 11, 6, 5}; // Array de inteiros com 8 elementos
    int i;
    int busca = 7; // Valor que estamos buscando no array
    int conta_int_array = 0; // Variável para contar quantas vezes o valor é encontrado no array
      
    for (i = 0; i < 8; i++) {
       if (busca == array[i]) { // Compara o valor de busca com cada elemento do array
            conta_int_array++; // Incrementa a contagem se houver uma correspondência
       }
    }

    if (conta_int_array == 1) { // Se o valor foi encontrado exatamente uma vez
        printf("Repetiu 1 vez");
    } else if (conta_int_array > 1) { // Se o valor foi encontrado mais de uma vez
        printf("Repetiu %i vezes", conta_int_array);
    } else { // Se o valor não foi encontrado
        printf("Não repetiu");
    }

    return 0;
}
