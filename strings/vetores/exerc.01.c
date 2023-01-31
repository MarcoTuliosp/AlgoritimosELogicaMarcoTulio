#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
int tam = 20;
    int i, vet[tam], copia, cont, trocou;

    srand(time(NULL));

    for(i=0; i<tam; i++){
        vet[i] = rand() % 100;
    }

printf("\n Vetor Antes da Ordencao:\n");
for(i=0; i<tam; i++){

    printf("%d ", vet[i]);
}

do
{
    cont++;
    trocou = 0;
    for(i=0; i<19; i++){
        if(vet[i] > vet[i + 1]){
            copia = vet[i];
            vet[i] = vet[i + 1];
            vet[i + 1] = copia;
    trocou = 1;
        }
    }

} while (trocou);

printf("\n\nVetor Depois da Ordenacao:\t trocou: %d \n\n", cont);
for(i=0; i<tam; i++){
    printf("%d ", vet[i]);
}



    return 0;
}