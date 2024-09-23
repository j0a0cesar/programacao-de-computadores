#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que aloque dinamicamente uma matriz de inteiros. As dimensões da matriz
deverão ser lidas do usuário. Em seguida, escreva uma função que receba um valor e retorne 1,
caso o valor esteja na matriz, ou retorne 0, no caso contrário.*/
int main(){
	
	int **matriz,i,j,Nlinhas,Ncolunas;
	

		printf("Digite o tamanho da matriz");
		
		printf("\nQuantidade de linhas:");
		scanf("%d", &Nlinhas);
		
		printf("\nQunatidade de colunas:");
		scanf("%d", &Ncolunas);
	
	
	matriz = (int**) malloc(Nlinhas * sizeof(int*));
	
	for(i = 0; i < Nlinhas;i++){
		matriz[i] = (int*) malloc (Ncolunas * sizeof(int));
	}
	printf("Digite os numeros da sua matriz:\n");
	
	for(i = 0; i < Nlinhas;i++){
		for(j=0;j <Ncolunas;j++){
			printf("[%d][%d] :",i,j);
		scanf("%d",&matriz[i][j]);
		}
	}
	printf("Resultados:\n");
	for(i = 0; i < Nlinhas;i++){
		for(j=0;j <Ncolunas;j++){
			printf("[%d][%d]:[%d]\n",i,j,matriz[i][j]);
		}
	}
	for (i = 0; i < Nlinhas; i++) {
	free(matriz[i]);
	}
	free(matriz); 

return 0;	
}
