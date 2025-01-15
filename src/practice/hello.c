#include <stdio.h> // diz ao pre processador C para puxar o conteudo de outro arquivo

/*
Hello, World feito em C
*/

int main(void) {
    // void é dado como "vazio", não indicando parametros

    int i = 2; // intergers
    float f = 3.14; // floating point number
    char *s = "hello, world!"; // ponteiro char é do tipo string

    printf("%s i = %d and f = %f!\n", s, i, f);
    return 0; // indica que o programa acabou
}
