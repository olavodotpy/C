#include <stdio.h>


int main(void) {
    int i = 0;

    while (i < 10) {
        printf("i is now %d!\n", i);
        i++;
    }

    printf("all done!\n");

    while (1) {
        printf("repeats forever\n");
    }
}