#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int i, j, mat[5][7], soma = 0;

    srand(time(NULL));

    for(i=0; i<5; i++){
        for(j=0; j<7; j++){

        mat[i][j] = rand() % 100;

        }
        
    }

    printf("\n Matriz: \n");

    for(i=0; i<5; i++){
        for(j=0; j<7; j++){
            printf("%2d ", mat[i][j]);
            soma += mat[i][j];
        }
        printf("\n");
    }
      printf("\n soma Total:  %d\n", soma);



    return 0;
}