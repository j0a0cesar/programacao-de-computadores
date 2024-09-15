#include <stdio.h>
#include <stdlib.h>
/*7. Escreva um programa que peça ao usuário para especificar o tamanho de um vetor de inteiros e, em seguida, aloque dinamicamente memória para esse vetor. Preencha o vetor com números aleatórios e, em seguida, imprima os valores.*/ 


int main() {
    
    int *p,tam;

    printf("Especifique o tamanho do vetor de inteiros:\n");
    scanf(" %d", &tam);

    p = (int*) calloc(tam, sizeof(int));

    if(p == NULL){
        printf("Erro de alocação de memória.\n");

        return 1;
    }

    for(int i=0; i < tam; i++){
        
    }

    srand(time(NULL));

    for(int i=0; i<tam; i++){
        p[i] =rand() %100;
    }
    
    printf("\nOs %d números são:\n", tam);
    
    for(int i=0; i < tam; i++){
        printf("\n%d: %d", i+1, p[i]);
    }
    
    printf("\n");
    
  free(p);
return 0;
}
