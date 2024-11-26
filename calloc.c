#include <stdio.h>
#include <stdlib.h>

int main(){
	//ponteiro p
	int *p,i;
	//alocação dinâmica de memoria
	p = (int*) calloc(5 , sizeof(int));
	// um for para ver os valores que foram alocados, coomo é calloc é para ter certeza que foi tudo inicializado com 0
	for(i=0; i<5; i++){
		printf("O valor da posicao: [%d] = [%d]\n",i,p[i]);
		
	}
	
	printf("\n\n");
	//for para prencher
	for(i=0; i<5; i++){
		printf("Digite o valor da posicao %d: ",i);
		scanf("%d", &p[i]);
	}
	
	printf("\n\n");
	//for para exibir
	for(i=0; i<5; i++){
		printf("O valor da posicao: [%d] = [%d]\n",i,p[i]);
		
	}
	
	//free para liberar memoria
	free(p);
	
	
return 0;
	
}
