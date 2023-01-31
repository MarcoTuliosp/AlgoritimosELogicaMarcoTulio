#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
  char palavra[50] = {"Bom dia, Simpatia"};
  char str[] = {"oia"};
  char *ponteiro;

  ponteiro = strstr(palavra, str);

  if (ponteiro) {
    printf("\n%c%c%c", *ponteiro, *(ponteiro + 1), *(ponteiro + 2));
  }else{
    
    printf("\nPonteiro Nulo");
  }
  




    return 0;
}