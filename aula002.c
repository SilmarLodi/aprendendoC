#include <stdio.h>
#include <stdlib.h>

void main(){

    //definindo variaveis
    int a = 6, b = 2;

    //Soma
// printf("A Soma de a e b = %d \n\n", a + b); // só mostra o resultado.
    printf("A soma de %d e %d = %d \n",a , b, a + b);
// quando usa %d e %d = %d",a , b, a + b mostra o numeros a serem somados e o resultado.

    //subtracao (+)
    printf("\n A subtracao de %d e %d = %d \n",a , b, a - b);

    //divisao (/)
    printf("\n A Divisao de %d e %d = %d \n",a , b, a / b);

    //Multiplicaçãov(*)
    printf("\n A multiplicacao de %d e %d = %d \n",a , b, a * b);

      // Resto da divisão (%)
    printf("\n O resto da divisao de %d e %d = %d \n",a , b, a % b);

      // Valor Absoluto () sempre positivo
    printf("\n O valor absoluto de -3 = %d", abs(-3));



}
