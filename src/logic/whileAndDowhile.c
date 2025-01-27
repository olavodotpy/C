#include <stdio.h>
#include <stdlib.h>


int numberGenerator(int number) {

    int r;

    do {
        r = rand() % 100;
        printf("%d this is different from that %d\n", r, number);
    } while (r != number);
}


int main(void) {
    int i = 10;

    while (i < 10) {
        printf("i is now %d!\n", i);
        i++;
    }

    do {
        printf("do-while: i is %d\n", i);
        i++;
    } while (i < 10);

    numberGenerator(50);

    printf("all done!\n");

    // while (1) {
    //     printf("repeats forever\n");
    // }
}
