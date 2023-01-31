#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//comparando Strings com strcmp

int main(){
    char palavra1 [50] = {"bola"};
    char palavra2 [50] = {"abacate"};

    printf("\n Resultado %d\n\n", strcmp(palavra1, palavra2));
}