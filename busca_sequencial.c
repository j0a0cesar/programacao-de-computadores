
#include <stdio.h>
	int buscaSequencial(int *lista, int tamanho, int chave) {
	 int i;
	 
	for ( i = 0; i < tamanho; i++) {
	if (lista[i] == chave) {
	return i; // Retorna o índice se encontrar a chave
}
}
return -1; // Retorna -1 se não encontrar a chave
}
	
	int main() {
	
    srand(time(NULL));
	int i;	
	int numeros[100];
	int buscado, resultado;
	
	
	for(i = 0; i < 100; i++){
		numeros[i] = rand() %101;
		printf("Indice: [%d] Numero:[%d]\n", i,numeros[i]);
	}
	
	printf("Digite o numero que deseja buscar: ");
	scanf("%d", &buscado);
	resultado = buscaSequencial(numeros,10,buscado);
	
	if (resultado != -1) {
	printf("O elemento %d foi encontrado no indice %d.\n", buscado, resultado);
	
} else {
	printf("O elemento %d nao foi encontrado na lista.\n", buscado);
}
return 0;


}
