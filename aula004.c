#include <stdio.h>
#include <stdlib.h>

void main(){
//definindo variaveis
    int a = 20;

//conectivo Logico E 'AND' simbolizado por '&&' (dois Es comerciais)
//'IMPORTANTE' Se a comparação for falsa não entra no bloco

    if(a > 5 && a < 15){
        printf("\n A variavel 'a' esta entre 5 e 15 \n");
    }

//conectivo Logico OU 'Or' simbolizado por '||' (duas barras retas)
//'IMPORTANTE' Se a comparação for verdadeira já entra no bloco!

    if(a > 5 || a > 15){
        printf("\n A variavel 'a' eh maior que 5 e 15 \n");
    }

    //misturando conectivos

    if((a > 5 && a < 15)|| a == 20){
        printf("\n A variavel 'a' esta entre 5 e 15 ou vale 20 \n");
    }
}
