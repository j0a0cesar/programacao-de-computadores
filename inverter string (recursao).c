#include <stdio.h>
void troca_lugar(int ks);
void troca_lugar(int ks){

    if ( ks <= 0){
        return ;
    }else{
        char palavra[20];
       scanf(" %s", palavra);

       troca_lugar(ks - 1);

       printf("%s ", palavra) ;
        }
}
int main() {
    int casas;

    printf("Tem quantas letras: \n");
    scanf(" %d", &casas);

    printf("Digite a palavra \n");
     troca_lugar(casas);

    printf("\n");

    return 0;
}
