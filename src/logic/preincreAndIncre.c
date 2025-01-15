#include <stdio.h>

// incremento

int increment(void) {
    int i = 10;
    int j = 5 + i++; // computa 5 + 1, _then_ increment i

    printf("%d, %d\n", i, j);
}

int preIncrement(void) {
    int i = 10;
    int j = 5 + ++i; // Increment i, _then_ computa 5 + i

    printf("%d, %d\n", i, j);
}

int main(void) {
    increment();
    preIncrement();
}
