#include <stdio.h>

int main() {
    int ticket, idproof, luggage;

    printf("Do you have a ticket? (1-Yes, 0-No): ");
    scanf("%d", &ticket);

    if (ticket == 1) {
        printf("Do you have ID proof? (1-Yes, 0-No): ");
        scanf("%d", &idproof);

        if (idproof == 1) {
            printf("Is luggage within 15kg? (1-Yes, 0-No): ");
            scanf("%d", &luggage);

            if (luggage == 1) {
                printf("Check-in successfully...\n");
            } else {
                printf("Extra luggage charges apply.\n");
            }
        } else {
            printf("ID proof required.\n");
        }
    } else {
        printf("No ticket, no entry.\n");
    }

    return 0;
}

