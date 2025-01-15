#include <stdio.h>


int main(void) {
    int i;
    int j;

    for (i = 0, j= 10; i < 2, j < 30; i++, j++) {
    // a virgula serve para separar as expressões e executalos em 1 só
    // da esquerda para a direita, sempre priorizando o mais da direita
        printf("%d, %d\n", i, j);
    }
}
