#include<stdio.h>
#include<stdlib.h>
int main(){
    int num, cont, result;

    printf("Qual tabuada deseja:\n");
    scanf("%d", &num);

    for (cont = 1; cont <= 10; cont= cont+1)
    {
       result = num * cont;

       printf("%d x %d = %d\n", num, cont, result);
    }
    
}