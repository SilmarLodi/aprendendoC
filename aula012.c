#include <stdio.h>
#include <stdlib.h>
#define TAM 3

void main(){
//vetores são como criados mudos com varias gavetas
//variaveis são as gavetas
    int vetor[TAM], cont;
//passando valores para vetores
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    // adicionando + 1 nos vetores
    for(cont = 0; cont < TAM ; cont++)
        vetor[cont] = vetor[cont] + 1;

// exibindo os valores
    printf("\n Posicao 0: %d", vetor[0]);
      printf("\n Posicao 1: %d", vetor[1]);
        printf("\n Posicao 2: %d \n", vetor[2]);

// Criando laço de repetição

    for(cont = 0; cont < TAM ; cont++){
//significa 'quando o contador for menor que 3 , conte mais UM'
        printf("\n Posicao %d : %d \n", cont, vetor[cont]);
    }
// Lendo valores para o vetor
    for(cont = 0; cont < TAM ; cont++){
        scanf("%d", &vetor[cont]);
    }
      for(cont = 0; cont < TAM ; cont++){
        printf("\n Posicao %d : %d \n", cont, vetor[cont]);
    }
}
