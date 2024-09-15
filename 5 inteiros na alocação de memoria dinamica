#include <stdio.h>
#include <stdlib.h>
/*6. Crie um programa que:
    1. Aloque dinamicamente um ponteiro de 5 números inteiros;
    2. Peça para o usuário digitar os 5 números no espaço alocado;
    3. Mostre na tela os 5 números;
    4. Libere a memória alocada;*/ 


int main() {
    
    int *p;

    p = (int*) malloc(5 * sizeof(int));

    if(p == NULL){
        printf("Erro de alocação de memória.\n");

        return 1;
    }

    for(int i=0; i<5; i++){
        printf("Digite %dº inteiro : ",i+1);
        scanf(" %d", &p[i]);
    }
    
    printf("Os 5 números são:");
    
    for(int i=0; i<5; i++){
        printf("\n%d: %d", i+1, p[i]);
    }
    
    printf("\n");
    
  free(p);
return 0;
}
