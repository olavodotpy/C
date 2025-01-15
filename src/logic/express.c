#include <stdio.h>

// if ternário em C

int ternIf(void) {
    int x = 9;
    int y = 0;
    int result = y += x > 10? 17: 37;

    printf("%d\n", result);
    printf("The number %d is %s.\n", y, y % 2 == 0? "even": "odd");
} 

int main(void) {
    ternIf();
}
