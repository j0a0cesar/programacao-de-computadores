#include <stdio.h>

#include <stdlib.h>

int main(){
	
	FILE *arquivo = fopen("exemplo.txt", "r");	
	
	if(arquivo == NULL){
		printf("Erro na abertura do arquivo\n");
		exit(1);
	}
	else{
		printf("Arquivo aberto com sucesso!\n");
	}
	
	char letra;
	
	while((letra = fgetc(arquivo)) != EOF){
		printf("%c", letra);
	}
	
	/*char nome [50];
	int idade, filhos;
	float peso;
	
	fscanf(arquivo, "%d", &idade);
	fscanf(arquivo, "%f\n", &peso);
	
	fgets(nome, 50, arquivo);
	
	printf("Idade lida: %d\n", idade);
	printf("Peso lido: %f\n", peso);
	printf("Nome lido: %s\n", nome);
	*/
	
/*	int aux = 28;
	fprintf(arquivo, "Rua das Rosas, numero %d\n\n", aux);
	fprintf(arquivo, "Progzinho melgor materia do semestre!\n");
	
	char frase[] = "Va contar tudo para sua mae Quico!\n";
	
	if(fputs(frase, arquivo) != EOF){
		printf("Escrita deu certo!\n");
	}
	else{
		printf("Deu problema na escrita!\n");
	}
	 
	 char operacao =  '+';
	 
	 fputc (operacao, arquivo);
*/
	if (fclose(arquivo) == 0 ){
		printf("\nArquivo fechado com sucesso!\n");
	} else{
		printf("Erro a o fechar o arquivo\n");
		exit(1);
	}
	
	
return 0;
}
