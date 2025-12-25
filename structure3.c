#include <stdio.h>

struct student {
    int roll;
    char name[50];
    int marks;
};

int main() {
    int stud, i;
    struct student students[50];

    printf("Enter number of students: ");
    scanf("%d", &stud);

    for (i = 0; i < stud; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Roll no: ");
        scanf("%d", &students[i].roll);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    printf("\n----- Students Record -----\n");
    for (i = 0; i < stud; i++) {
        printf("Roll no = %d, Name = %s, Marks = %d\n",students[i].roll,students[i].name,students[i].marks);
    }

    return 0;
}

