#include <stdio.h>
#include <stdlib.h>
/*8. Faça um programa que leia um número N e:
    1. Crie dinamicamente e leia um vetor de inteiro de N posições;
    2. Leia um numero inteiro X e conte e mostre os múltiplos desse número que existem no vetor.*/ 

int main() {
    
    int *p,tam,i,x, count = 0;

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

    for(i=0; i<tam; i++){
        p[i] =rand() %100;
        printf("\n%d: %d", i+1, p[i]);
    }
        printf("\n\nDigite o divisor:");
        scanf(" %d", &x);
    
    
        for(i=0; i < tam; i++){
            if(p[i] % x == 0){
            printf("\n%d",p[i]);
            count ++;
        }
        }
    if(count == 0){
        printf("Nenhum múltiplo de %d foi encontrado.\n", x);
    } else {
        printf("\nTotal de múltiplos de %d: %d\n", x, count);
    }
    
    printf("\n");
    
  free(p);
return 0;
}
