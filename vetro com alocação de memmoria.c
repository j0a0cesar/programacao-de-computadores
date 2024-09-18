#include <stdio.h>
#include <stdlib.h>
int main(){
/*1. Faça um programa que leia um valor inteiro N não negativo. 
Se o valor de N for inválido, o usuário deverá digitar outro até que ele seja válido (ou seja, positivo).
Em seguida, leia um vetor V contendo N posições de inteiros, em que cada valor deverá ser maior ou igual a 2. 
Esse vetor deverá ser alocado dinamicamente

int *aloca_vetor(int tamanho){
	
}
int**aloca_matriz(int linhas,int colunas){
	
}
*/

	int n ,	i;
	int *array;
	
	array = (int*) calloc(n , sizeof(int));
	

	if(array == NULL){
	 printf("MEMÓRIA INSUFICENTE");
		return 1;
	}
	
	
	do{
		
		printf("\nDigite um inteiro positivo:");
	    scanf("%d",&n);
	    if(n<0){
	    			printf("\nValor invalido");
		}
	}
	while(n < 0);
	
	printf("Elementos do array:\n");
	for (i = 0; i < n; i++) {
		do{
			printf("Digite os valores maior ou igual a 2[i]:",i+1);
			scanf("%d", &array[i]);
			if(array[i] < 2){
			printf("\nValor invalido");
			}
		}
		while( array[i] < 2);
	
 }for (i = 0; i < n; i++) {
	printf("\nValor[%d]:[%d]", i+1,array[i]);

}   
	
	free(array);
	
return 0;
}
