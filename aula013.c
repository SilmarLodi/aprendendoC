#include <stdio.h>
#include <stdlib.h>

void main(){
//variaveis (string)
    char palavra[255];

    //instru��o
    printf("Digite uma palavra \n");

    // Limpando o Buffer
    setbuf(stdin, 0);

    //ler a String
    fgets(palavra, 255, stdin);

//Para limpar as casas n�o utilizadas
    palavra[strlen(palavra)-1] = '\0';

    //imprimindo na tela
    printf("\n %s", palavra);


}
