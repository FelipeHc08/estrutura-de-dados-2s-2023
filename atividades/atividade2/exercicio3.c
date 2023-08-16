/*
Exercício 3 - Verificar se um elemento existe no array Escreva uma função que recebe um array de strings 
e uma string de busca, e retorna "1" se a string de busca existe no array, ou "0" caso não exista.

Exemplo: busca_string(["texto", "J", "EDA"], "EDO")
Saída: 0 
*/

#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese");

    //declaração de variáveis
    char string[3][20] = {"João", "Maria", "Antônio"};
    int i;
    char busca_string[1][20] = {"Maria"};//altere aqui para verificar
    int tem = 0;//variável de controle para saber se a busca existe no array
      
    for (i = 0; i < 3; i++) {//laço de repetição do tipo for para acessar o array de Strings 
       
        if (strcmp(busca_string[0], string[i]) == 0) { // condicional if que utiliza a função strcmp para comparar o vlaor de busca_string e string. Caso receba 0, a variável de controle receberá o valor 1
           
            tem = 1;
            break;//quebra o laço de repetição
        
        }
    }

    //condicional if que exibirá na tela o resultado conforme o valor recebido pela variável tem
    if (tem == 1)
    {
        printf("TEM");
    }else
    {
        printf("NÃO TEM");
    }
    
    return 0;

}
