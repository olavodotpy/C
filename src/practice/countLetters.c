#include <stdio.h>
#include <string.h>


int count_letters(char *array, int size, char target_char) {

    int count = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] == target_char) {
            count += 1;
        }
    }

    return count;
}

int main(void) {

    char phrase[] = "pneumoultramicroscopicossilicovulcanoconiótico";

    int sizeArray = strlen(phrase);

    printf("%d\n", count_letters(phrase, sizeArray, 'o'));

    return 0;
}
