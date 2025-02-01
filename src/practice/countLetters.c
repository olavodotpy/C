#include <stdio.h>
#include <string.h>


int count_letters(char *array, int size, char target_char) {

    int count = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] == target_char) {
            count++;
        }
    }

    return count;
}

int main(void) {

    char phrase[100];
    char letter;

    printf("Enter a phrase or word: ");
    scanf(" %99s", phrase);

    printf("Letter you want to count: ");
    scanf(" %c", &letter);

    int sizeArray = strlen(phrase);

    printf("%s contains %d letter(s) '%c'\n", phrase, count_letters(phrase, sizeArray, letter), letter);

    return 0;
}
