#include<stdio.h>
#include<stdlib.h>
int main(){
    int num, cont;

    printf("Insira Um Numero:\n");
    scanf("%d", &num);

    for (cont = 0; cont <= num; cont = cont+1)
    {
        printf("%d,", cont);
    }
    printf("Acabou!!");
}