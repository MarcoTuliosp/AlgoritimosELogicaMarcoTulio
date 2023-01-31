//descobirndo o tamanho de uma string
#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, tam = 0;
    char palavras[55] = {"Oi. Vamos comecar a programar em Linguagem C."};

printf("Digite algo:\n");

fgets(palavras, 55, stdin);

i = 0;
while (palavras[i] != '\0'){
    if(palavras[i] == '\n'){
        palavras[i] = '\0';
    }
    i++;
}


i = 0;
while(palavras[i] != '\0'){
   // printf("%d = %d\n", i, palavras[i]);
    tam++;
    i++;
}

printf("Tamanho %d\n", tam);
printf("%s", palavras);
}