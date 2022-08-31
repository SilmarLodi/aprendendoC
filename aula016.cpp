#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;
/* quando usar esse código não precisa usar o std::
e o std::cin std::cout  dentro do corpo int-main */

int main(){

// Int (variavel)
// Vetor um conjunto de gavetas (variaveis)
// Matriz é um conjunto de vetores

   // Criando a Matriz
   int matriz [2][2], i, j;

        matriz [0][0] = 1;
        matriz [0][1] = 2;
        matriz [1][0] = 3;
        matriz [1][1] = 4;

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){

            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }


return 0;
}
