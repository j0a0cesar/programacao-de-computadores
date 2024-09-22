#include <stdio.h>
#include <stdlib.h>

/*Faca um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação dinâmica de memória.
 Em seguida, leia do usuário seus valores e mostre quantos dos números são pares e quantos são  ímpares;*/

	
int main() {
    
    int *p,tam,i, impar = 0, par = 0;
    
    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &tam);

    p = (int*) malloc(tam * sizeof(int));

    if(p == NULL){
        printf("Erro de alocação de memoria.\n");

        return 1;
    }

    for(i=0; i < tam; i++){
        printf("Digite %d inteiro : ",i+1);
        scanf(" %d", &p[i]);
    }
    
    printf("Os %d numeros sao:", tam);
    
    for(i=0; i<tam; i++){
    	
    if( p[i]% 2 == 0){
    	par++;
	}
	else{
		impar ++;
	}
    }
       printf("\nA quantidade de impar:%d\nA quandiade de par:%d",impar,par);
       
    printf("\n");
    
  free(p);
return 0;
}
