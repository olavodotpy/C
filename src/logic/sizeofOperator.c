#include <stdio.h>


int main(void) {
    int a = 999;

    // se usa %zu para formatar o tipo específico do size_t
    // e para tipos negativos do size_t se usa %zd

    printf("%zu\n", sizeof a);
    printf("%zu\n", sizeof (2 + 7));
    printf("%zu\n", sizeof 3.14);

    printf("com tipoa\n");

    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(char));

}