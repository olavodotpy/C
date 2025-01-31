#include <stdio.h>


int main(void) {

    int goat_count = 2;

    switch (goat_count) {
        case 0:
            printf("you have no goats.\n");
            break;
        
        case 1:
            printf("you have a singular goat.\n");
            break;
        
        case 2:
            printf("you have a brace of goats.\n");
            break;
        
        default:
            printf("you have a bona fide plethora of goats!\n");
            break;
    }

    int x = 1;

    switch(x) {
        case 1:
            printf("1\n");
            // Fall through!
        
        case 2:
            printf("2\n");
            break;
        
        case 3:
            printf("3\n");
            break;
    }

    char c = 'b';

    switch (c) {
        case 'a':
            printf("it's 'a'!\n");
            break;
        
        case 'b':
            printf("it's 'b'!\n");
            break;
        
        case 'c':
            printf("it's 'c'!\n");
            break;
    }
}
