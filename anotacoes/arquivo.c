#include<stdio.h>
#include<stdlib.h>

int main (int argc, char*argv[]){

    FILE *fp;

    fp = fopen("texte.txt","r");

    if(fp == NULL){
        
        perror("Não foi possível abrir o arquivo");
        exit(1);
    }


    char c;

    do{
      c = fgetc(fp);
      printf("%c", c);  
    }while(c != EOF);

    fclose(fp);

    exit(0);
}