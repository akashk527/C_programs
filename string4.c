#include <stdio.h>

int main() {
    char str[] = "I am learning C";
    int i = 0, words = 1;

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            words++;
        }
        i++;
    }

    printf("Word count = %d", words);

    return 0;
}

