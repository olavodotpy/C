#include <stdio.h>
#include <stdlib.h>


int prime(int number){

    for (int i = 1; i < number; i++) {
        if (i / i == 1 && i / i == i) {
            printf("prime is %d", i);
        }
    }
}

int main(void) {
    prime(10);
    return EXIT_SUCCESS;
}