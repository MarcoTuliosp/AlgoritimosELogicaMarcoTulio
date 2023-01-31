 //aula 132 indentificando o fim de uma string
#include<stdio.h>
#include<stdlib.h>


int main(){
    int i;
    char palavras[55] = {"Oi. Vamos comecar a programar em Linguagem C."};

    printf("Insira algo\n");

    fgets(palavras, 15, stdin);

i = 0;
while (palavras[i] != '\0'){ 
    printf("%d = %c\n", i, palavras[i]);
      i++;  
}
printf("\n"); 


}
