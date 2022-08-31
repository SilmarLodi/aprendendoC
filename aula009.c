#include <stdio.h>
#include <stdlib.h>

void main()
{
// definindo variaveis
    int cont;

// Tabuada do 5
    for(cont = 1; cont <= 10; cont++) {
    printf("\n 5 X %d = %d", cont, 5 * cont);
    }
/* o (cont <= 10, cont++)
 significa: enquanto for menor igual 10, adicione 1.*/

    for(cont = 0; cont <= 10; cont = cont + 2) {
    printf("\n %d",cont);
    }

//Contagem Regressiva
    for(cont = 10; cont > 0; cont--) {
    printf("\n %d",cont);
    }
}


// Laços de Repetiçoes FOR (para)
