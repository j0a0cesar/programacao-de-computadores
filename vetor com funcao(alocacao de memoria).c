#include <stdio.h>
#include <stdlib.h>
/*Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne o ponteiro
para um vetor de tamanho N alocado dinamicamente. Esse vetor deverá ter os seus elementos
preenchidos com certo valor, também passado por parâmetro. Se N for negativo ou igual a zero, um
ponteiro nulo deverá ser retornado.*/


int recebe_valor() {
    int n;
    printf("Digite o tamanho do seu vetor:\n");
    scanf("%d", &n);
    
    if (n > 0) {
        return n;  
    } else {
        printf("Valor inválido!\n");
        return 0;  
    }
}

int main() {
    int n, i, valor, *p;
    

    n = recebe_valor();
    
    
    if (n == 0) {
        return 1;  
    }
    
    
    p = (int*) malloc(n * sizeof(int));
    
    
    if (p == NULL) {
        printf("Memória insuficiente.\n");
        return 1;
    }
    

    printf("Com qual valor deseja preencher o vetor?\n");
    scanf("%d", &valor);
    
   
    for (i = 0; i < n; i++) {
        p[i] = valor;
    }
    
    
    printf("Valores do vetor:\n");
    for (i = 0; i < n; i++) {
        printf("[%d]: [%d]\n", i, p[i]);
    }
    
    
    free(p);
    
    return 0;
}
