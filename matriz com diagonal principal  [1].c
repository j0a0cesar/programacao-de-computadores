#include <stdio.h>
#include <stdlib.h>
/*Escreva uma função que receba como parâmetro um valor N e retorne o ponteiro para uma matriz
alocada dinamicamente contendo N linhas e N colunas. Essa matriz deve conter o valor 1 na
diagonal principal e 0 nas demais posições*/


int recebe_valor() {
    int n;
    printf("Digite o tamanho da sua matriz(I x J):\n");
    scanf("%d", &n);
    
    if (n > 0) {
        return n;  
    } else {
        printf("Valor inválido!\n");
        return 0;  
    }
}

int main() {
    int n, Ncolunas , Nlinhas, i,j, **matriz;
    
    n = recebe_valor();
    
      Nlinhas = n;
      Ncolunas = n;
    

    matriz = (int**) malloc(Nlinhas * sizeof(int*));
    
    for(i = 0;i < Nlinhas; i++){
    	matriz[i] = (int*) malloc (Ncolunas * sizeof(int));
	}
    

    for (i = 0; i < n; i++) {
       for(j = 0;j< Ncolunas; j++){
       	if( i == j){
       		matriz [i][j] = 1;
		   }else{
		   	matriz [i][j] = 0;
		   }
	   }
    }
    
    
    printf("A matriz:\n");
    for (i = 0; i < n; i++) {
    	for(j = 0; j < Ncolunas; j++){
    		printf("[%d]", matriz[i][j]);
		}printf("\n");
    }
    
    for(j = 0; j < Ncolunas; j++){
    	free(matriz[j]);
	}
    
    free(matriz);
    
    return 0;
}
