#include <stdio.h>
// inclui tipos familiares de boolenos 
#include <stdbool.h>


int boolInclude(void) {
    bool x = true;

    if (x) {
        printf("x is true!\n");
    }
}

int boolBin(void) {
    int x = 1;

    if (x) {
        printf("x is true!\n");
    }
};


int main(void) {
    boolBin();

    boolInclude();
};
