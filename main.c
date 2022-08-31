#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,""); // permite usar acentos
    //imprime Olá mundo
    printf("Olá!\n\n");

     //Lendo numeros inteiros

    // %d numeros inteiros
    // 'int' declaração de variavel (a)
    int a = 50;
    printf("O valor de A é = %d \n\n", a);
    scanf("\n %d", &a);
    printf("\n O valor de A mudou para %d \n\n", a);

    //Lendo numeros quebrados

    // float numeros quebrados (%f)
    float b = 5.5;
    printf("E o valor de b = %f \n", b);
    scanf("\n %f", &b);
    printf("O valor de b mudou para %f \n\n", b);


     // 'char' Lendo Letras. (%c)
    char letra = 't';
    printf("E o valor de c agora é = %c \n", letra);
    fflush(stdin); // usado para fazer a limpeza da memoria
    scanf("%c", &letra);
    printf("O valor de c mudou para %c", letra);

    return 0;
}
