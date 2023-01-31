#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//copiando Strings com strcpy

int main(){
    char palavra1 [50] = {"bola"};
    char palavra2 [50] = {"abacate"};

printf("\nAntes de copiar:\nPalavra 1: %s\n Palavra 2: %s\n", palavra1, palavra2);

strcpy(palavra2, palavra1);

printf("\nDepois de Copiar:\nPalavra 1: %s\n palavra 2: %s\n", palavra1, palavra2);



}
