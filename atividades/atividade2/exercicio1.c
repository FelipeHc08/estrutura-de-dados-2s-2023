/*Exercício 1 - Soma dos elementos de um array. Escreva uma função que recebe um array de números inteiros 
e retorna a soma de todos os elementos;


Exemplo: soma_array([5, 7, 9,6])
Saída: 27 
*/

#include <stdio.h>

int main() {
    
    int array[4] = {5, 7, 9, 6}; //declaração do vetor array
    int soma = 0;//declaração da variável soma inicializada com o valor 0

    for (int i = 0; i < 4; i++) { //laço de repetição para passar por todos os valores do array
        soma += array[i];//a variável soma irá armazenar a soma do valor de cada posição do array
    }
    printf("%d", soma);//exibe o resultado na tela

    return 0;
}