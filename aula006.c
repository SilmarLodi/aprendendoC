#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){

// Respons�vel por alimentar o 'rand' de forma diferente
    srand((unsigned)time(NULL));

// Vari�vel que recebe o resto da divis�o
    int aleatorio = rand() % 25;

    printf("%d", aleatorio);

}
