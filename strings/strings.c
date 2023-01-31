#include<stdio.h>
#include<stdio.h>

int main(){
    char palavras[50] = {"Oi. Vamos comecar a programar em Linguagem C."};

    printf("Informe seu Nome: ");
   // scanf("%30[^\n]", nome);

  // gets(nome);

   fgets(palavras, 50, stdin);

    printf("%s\n\n", palavras);
}