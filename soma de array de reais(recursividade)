/*Recursividade
*/
#include <stdio.h>

float somaVetor(float vetor[], int n);
float somaVetor(float vetor[],int n){
    // Caso base retorna 0
    if (n == 0 ) {
        return vetor[0];

    }
    // Caso recursivo
    else{
        return vetor[n-1] + somaVetor(vetor, n -1);
    }

}

int main() {
    
    int n = 8;
    float vetor[] = {2.4,3.7,1.9,3.7,0.9,2.6,3.7,4.1};
    
    float resultado = somaVetor(vetor,n);
    // Calcula e imprime a soma
    
    printf("A soma dos elementos é: %.2f\n", resultado);

    return 0;
}
