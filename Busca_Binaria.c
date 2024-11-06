#include <stdio.h>
	int buscaBinaria(int *lista, int inicio, int fim, 
	int chave) {
	while (inicio <= fim) {
	int meio = inicio + (fim - inicio) / 2;
	if (lista[meio] == chave) {
	return meio; // Retorna a posição se encontrar a chave
	} else if (lista[meio] > chave) {
	fim = meio - 1; // Busca na metade inferior
	} else {
	inicio = meio + 1; // Busca na metade superior
	}
	}
	return -1; // Retorna -1 se a chave não estiver na lista
	}

int main() {
	srand(time(NULL));
	int numeros[100] ;
	int buscado,i, resultado;
	
	for(i = 0; i < 100; i++){
		numeros[i] = rand() %101;
		printf("Indice: [%d] Numero:[%d]\n", i,numeros[i]);
	}
	printf("Digite o numero que deseja buscar: ");
	scanf("%d", &buscado);
	resultado = buscaBinaria(numeros, 0, 100,buscado);
	
	if (resultado != -1) {
	printf("O elemento %d foi encontrado no indice %d.\n", buscado, resultado);
	} else {
	printf("O elemento %d nao foi encontrado na lista.\n", buscado);
	}
return 0;
}
