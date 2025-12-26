#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;
    float marks;

    fp = fopen("C:\\2612\\akash_write103.txt", "r");

    if (fp == NULL) {
        printf("Error opening file...\n");
        return 1;
    }

    fscanf(fp, "Name : %s\nAge : %d\nMarks : %f", name, &age, &marks);

    printf("Student Information Read from file\n");
    printf("Name = %s\n", name);
    printf("Age = %d\n", age);
    printf("Marks = %.2f\n", marks);

    fclose(fp);
    return 0;
}

