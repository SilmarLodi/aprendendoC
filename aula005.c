#include <stdio.h>
#include <stdlib.h>

void main(){
//definindo variaveis
    int a = 1;
    char b = 'x';
// código exemplo If
 if(a == 1) {
    printf("\n Opcao escolhida: 1");
 }else if(a == 2){
    printf("\n Opcao escolhida: 2");
 }else if(a == 3){
    printf("\n Opcao escolhida: 3");
 }else{
    printf("\n Opcao invalida");
 }

// switch case (modo mais organizado)

    switch(a){
    case 1:
         printf("\n Opcao escolhida: 1");
         break;
    case 2:
         printf("\n Opcao escolhida: 2");
         break;
    case 3:
         printf("\n Opcao escolhida: 3");
         break;
    default:
         printf("\n Opcao invalida");
    }

// switch com char
    switch(b){
    case 1:
         printf("\n A letra eh x");
         break;
    default:
         printf("\n Opcao invalida");
         break;
    }

}
