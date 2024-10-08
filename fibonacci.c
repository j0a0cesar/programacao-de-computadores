#include <stdio.h>
/*Recursividade
Escrever a função recursiva int fib(int n), que retorna o n-ésimo número da sequência de Fibonacci*/
#include <stdio.h>

int fib(int n);
int fib(int n){
    // Caso base retorna 0
    if (n == 0 ) {
        return 0;
        //caso base retorna 1
    }else if(n == 1){
        return 1;
    }
    // Caso recursivo
    else{
        return fib(n-1) + fib(n-2);
    }

}

int main() {
    // 
    int number;
    printf("Digite um numero: ");
    scanf(" %d", &number);

    // Calcula e imprime a soma
    int resultado = fib(number);
    printf("A soma dos elementos é: %d\n", resultado);

    return 0;
}
