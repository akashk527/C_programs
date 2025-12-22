#include <stdio.h>

int main() {
    int arr[2][2];
    int i, j;


    printf("Enter 4 numbers:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n2x2 Array is:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

