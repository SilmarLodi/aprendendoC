#include <stdio.h>
#include <stdlib.h>

void main(){
// definindo variaveis
    int opcao;
    while(opcao < 1 || opcao >3){
            //interface de Menu
        printf("Escolha uma opcao: \n");
        printf("\n Opcao 1");
        printf("\n Opcao 2");
        printf("\n Opcao 3 \n\n");

            scanf("%d", &opcao);

            switch(opcao){
            case 1:
            printf("\n Opcao 1 foi escolhida");
            break;
            case 2:
            printf("\n Opcao 2 foi escolhida");
            break;
            case 3:
            printf("\n Opcao 3 foi escolhida");
            break;
            default:
            printf("\n Opcao invalida");
            break;
            }

    }

}


// Laços de Repetiçoes FOR (para)
