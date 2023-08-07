#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num, i, resultado = 0;


    printf("Informe um número: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++) {
        
        if (num % i == 0) {
        resultado++;

    break;
    }
 }
    
    if (resultado == 0){
        printf("1");
    }
    else
        printf("0");
 
 return 0;
}
