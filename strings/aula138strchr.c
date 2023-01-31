#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
Aula 138: Procurando caracteres em uma String com as funções strchr e srtrchr
strchr  -> retorna a primeira ocorrência
strrchr  ->etorna a última ocorrência

*/

int main(){
  char palavra [50] = {"abacate"};
  char *letra;  //Variavel vai aramazenar Um valor de Ponteiro nao um caracter por causa do *

  letra = strchr(palavra, 'z');

  printf("\n%c", *letra);
  printf("%c", *(letra + 1));
  printf("%c", *(letra + 2));




    return 0;
}