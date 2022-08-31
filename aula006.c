#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){

// Responsável por alimentar o 'rand' de forma diferente
    srand((unsigned)time(NULL));

// Variável que recebe o resto da divisão
    int aleatorio = rand() % 25;

    printf("%d", aleatorio);

}
