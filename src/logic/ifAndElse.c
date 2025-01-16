#include <stdio.h>


int main(void) {
    int x = 0;

    if (x == 10) printf("x is 10\n");

    if (x == 10)
        printf("x is 10 with whitespace\n");

    // o C considero o conteudo da proxima espaço como parte da expressão
    // porém é uma má prática não usar chave - {} para bloco de intruções
    // para evitar erros

    if (x == 10)
    {
        printf("x is 10 with '{}'\n");
    }

    if (x == 99) {
        printf("is a 99\n");
    }
    else if (x == 0) {
        printf("is a 0\n");
    }
    else {
        printf("is a 10\n");
    }
}