#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//usando a funçao strlen para saber o tamnaho da sring


int main(){
int tam;
char palavras[50] = {"Oi. Vamos comecar a programar em Linguagem C."};

printf("Digite Algo\n");

fgets(palavras, 50, stdin);

printf("Tamanho %d", strlen(palavras));




}