/*
Exercício 5 - Multiplicar elementos de dois arrays.
 Escreva uma função que recebe dois arrays de números inteiros com o mesmo tamanho e
  retorna um novo array com os elementos resultantes da multiplicação dos elementos dos dois arrays.

Exemplo: multiplica_array([5, 7, 9, 6], [5, 7, 9,6])
Saída: [25, 49, 81, 36] 
*/

#include <stdio.h>

int main() {
    
    int array1[4] = {5, 7, 9, 6}; //declaração de dois arrays difrentes porém com os mesmos valores
    int array2[4] = {5, 7, 9, 6}; 
    int i, array_multiplica[4];//declaração da variável i e do array que receberá os ELEMENTOS resultantes da multiplicação
    int multiplicacao = 0;//declaração da variável que receberá os RESULTADOS da multiplicação

    for (int i = 0; i < 4; i++) 
    { 
    
    multiplicacao = array1[i] * array2[i]; // Multiplica os elementos correspondentes dos arrays array1 e array2 e armazena o resultado na variável multiplicacao.
    array_multiplica[i] = multiplicacao; // Armazena o resultado da multiplicação no array array_multiplica.
    
    }
    
    for (i = 0; i < 4; i++)
    {  
    
    printf("%d ", array_multiplica[i]); // Imprime os elementos do array array_multiplica, que contêm os resultados das multiplicações, separados por espaços.
    
    }


    return 0;
}