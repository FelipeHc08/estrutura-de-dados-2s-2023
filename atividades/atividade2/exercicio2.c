/*
Exercício 2 - Maior e menor elemento do array. 
Escreva uma função que recebe um array de números inteiros e retorna o menor e o maior elemento do array.

Exemplo: menor_maior_array([5, 7, 9,6])
Saída: 5, 9 
*/

#include<stdio.h>

int main(){

    int i, array[4] = {5, 7, 9, 6};//declaração da variável i para o laço de repetição e do vetor array
    int maior = array[0];// declaração e inicializção da variável maior, que aqui funciona como a suposição de que o elemento na posição 0 possui o maior valor do array
    int menor = array[0];// declaração e inicializção da variável menor, que aqui funciona como a suposição de que o elemento na posição 0 possui o menor valor do array

    for (i=1; i < 4; i++)//laço de repetição para acessar o array
    {
        if (maior < array[i])//condicional if que irá verificar se a variável maior é menor que qualquer outro valor i dentro do array, fazendo a comparação de elemento por elemento
        {
           maior = array[i];//caso a condicional seja verdadeira e exista algum elemento com valor maior do que o valor inicialmente atribuído a variável maior, a variável maior irá assumir o valor deste elemento
        }
        
    }
    for (i=1; i < 4; i++)//mesmo laço anterior, porém agora para definir o menor valor do array
    {
        if (menor > array[i])
        {
           maior = array[i];
        }
        
    }
    
    //exibe os valores na tela
    printf("Maior valor: %d",maior);
    printf("\nMenor valor: %d",menor);

    return 0;
}