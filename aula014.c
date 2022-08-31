#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

void main(){
    std::string palavra;

    printf("Digite uma palavra");
    std::cin >> palavra;
    cout << palavra;


/*variaveis (string)
    char palavra[255];

    //instrução
    printf("Digite uma palavra \n");

    // Limpando o Buffer
    setbuf(stdin, 0);

    //ler a String
    fgets(palavra, 255, stdin);

//Para limpar as casas não utilizadas
    palavra[strlen(palavra)-1] = '\0';

    //imprimindo na tela
    printf("\n %s", palavra);
}

//Trabalhando com String em Linguagem C++
