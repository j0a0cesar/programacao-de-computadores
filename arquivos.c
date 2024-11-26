#include <stdio.h>

int main() {
    char texto[21];
    
    // Abrindo o arquivo para escrita
    FILE *arquivo = fopen("revisao.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }
    
    // Pergunta o que a pessoa quer escrever no arquivo (string, limite de 20 caracteres)
    printf("Que mensagem voce gostaria de colocar no arquivo? \n");
    printf("Obs(vai ser string, com limite de 20 caracteres):\n");
    printf("Mensagem: ");
    scanf("%20[^\n]", texto);  // Lê até 20 caracteres ou até o '\n'
    
    // Escrevendo no arquivo.txt
    fprintf(arquivo, "%s\n", texto);
    
    // Fechando o arquivo de escrita
    if (fclose(arquivo) == 0) {
        printf("Arquivo fechado com sucesso.\n");
    } else {
        printf("Erro ao fechar o arquivo\n");
    }
    
    // Abrindo o arquivo para leitura
    FILE *arquivoLeitura = fopen("revisao.txt", "r");
    if (arquivoLeitura == NULL) {
        printf("Erro ao abrir o arquivo para leitura\n");
        return 1;
    }
    
    // Lendo os dados do arquivo.txt
    fscanf(arquivoLeitura, "%20[^\n]", texto);  // Lê até 20 caracteres ou até o '\n'
    
    // Fechando o arquivo de leitura
    if (fclose(arquivoLeitura) == 0) {
        printf("Arquivo fechado com sucesso.\n");
    } else {
        printf("Erro ao fechar o arquivo\n");
    }
    
    // Exibindo o que foi lido no arquivo
    printf("\n\nMensagem: ");
    printf("%s\n", texto);
    
    
    return 0;
}
