#include<stdio.h>
#include<stdlib.h>

int main(){
	int cont = 0, num;
	printf("Insira Um Numero:\n");
	scanf("%d", &num);
	
	while(cont <= num){
		printf("%d ", cont);
		
		cont = cont+1;
	}
	printf("Acabou!!");
}