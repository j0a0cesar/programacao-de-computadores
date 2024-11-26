#include <stdio.h>


void bubble_sort(int valores[], int n);
void insertion_sort(int valores[], int n);

void bubble_sort(int valores[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (valores[j] > valores[j + 1]) {
                // Troca os elementos
                int temp = valores[j];
                valores[j] = valores[j + 1];
                valores[j + 1] = temp;
            }
        }
    }
}
void insertion_sort(int valores[], int n){
	int i;
	for(i = 0;i < n;i++){
		int chave = valores[i];
		int j = i-1;
		while(j >= 0 && valores[j] > chave){
			valores[j+1] = valores[j];
			j--;
		}
		valores[j+1] = chave;
	}
}

int main() {
    int i, n;

    // Pedir para o usuário informar a quantidade de valores
    printf("Qual eh a quantidade de valores? ");
    scanf("%d", &n);  // Corrigido para passar o endereço de n

    // Definir o vetor de acordo com o valor de n
    int valores[n];

    // Ler os valores no vetor
    for (i = 0; i < n; i++) {
        printf("Digite o valor [%d]: ", i + 1);
        scanf("%d", &valores[i]);
    }

    // Ordenar os valores com bubble sort
    insertion_sort(valores, n);

    // Exibir os valores ordenados
    printf("Os valores ordenados sao:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    return 0;
}
