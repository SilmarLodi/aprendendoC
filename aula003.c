#include <stdio.h>
#include <stdlib.h>

//Condicionais
void main(){
//variaveis
    int a = 6,opcao = 1;
    float b = 2.5;
    char c = 'x';

//conditional simples 'if' se
// sinal '==' comparação

    if(a == 5){
    printf("\n a variavel a = 5");
        }

     if(b == 2.5)
    printf("\n A variavel b = 2.5");

    if(c == 'x')
    printf("\n A variavel c = letra x");

//conditional 'par ou impar' 'else' senao

    if(a % 2 == 1){
    printf("\n A variavel a eh Impar \n");
        }else{
    printf("\n A variavel A eh Par \n");
        }
// condicional composta
    if(opcao == 1){
    printf("\n A opcao = 1 \n");
        }else if(opcao == 2){
        }else{
    printf("\n A opcao nao eh igual a 1 e nem 2");
        }

}
