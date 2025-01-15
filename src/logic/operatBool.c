#include <stdio.h>


// Operator  Boolean meaning

//    &&           and
//    ||           or
//    !            not


int main() {
    int x = 30;

    if (!(x < 12)) {
        // operador not tem mais ordem de precedencia
        printf("X is not less than 12\n");
    }
}
