#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 int main(){
    int i, j, mat[7][7];

    srand(time(NULL));

    for ( i = 0; i < 7; i++){
        for(j=0; j<7; j++){
            mat[i][j] = rand() % 100;
        }

    }
    
    printf("\nMatriz\n");

    for(i=0; i<7; i++){
        for(j=0; j<7; j++){
            printf("%2d ", mat[i][j]);
        }
        printf("\n\n");
    }
    printf("\nDiagonal Principal\n");

    for(i=0; i<7; i++){
        for(j=0; j<7; j++){
            if(i == j){
                printf("%2d", mat[i][j]);
            }else{
                printf(" ");
            }

        }
    }





    return 0;
 }