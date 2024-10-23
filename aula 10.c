#include <stdio.h>
#include <stdlib.h>
int main(){
	
	FILE *arquivo = fopen("exemplo.txt", "a+");
	
	if(arquivo == NULL){
		printf("Erro na abertura do arquivo\n");
		
		exit(1);
	}
	
	fprintf(arquivo,"Eh o carro do ovo, freguesia!\n");

	fflush(arquivo); //limpa o buffer do arquivo
	
	rewind(arquivo); //Move o indicador de posição de um arquivo para o início do arquivo, permitindo que você comece a ler ou escrever a partir do início novamente
	
	char teste;
	printf("Parei a execucao\n");
	scanf(" %c", &teste);
	
	
	/*char frase[100];
	
	fgets(frase,100,arquivo);
	
	printf("Frase lida do arquivo: %s\n", frase);*/
	
	
	if(fclose(arquivo) != 0 ){
		printf("Erro no fechamneto do arquivo!\n");
		
		exit(1);
	}
	if(rename){
		
	}
	if( remove("exemplo.txt")== 0){
		printf("Arquivo removido com sucesso!\n");
	}
	else{
		printf("deu ruim na remocao do arquivo!\n");
	}
return 0;
}
