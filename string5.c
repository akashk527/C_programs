#include <stdio.h>

int main() {
    char str[] = "banana";
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == 'a') {
            printf("@");
        } else {
            printf("%c", str[i]);
        }
        i++;
    }

    return 0;
}

