#include <stdio.h>

struct employee {
    int id;
    char name[50];
    int salary;
};

int main() {
    int n, i;
    struct employee emp[50];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Employee Salary: ");
        scanf("%d", &emp[i].salary);
    }

    printf("\n---- Employee Records ----\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d | Name: %s | Salary: %d\n",emp[i].id, emp[i].name, emp[i].salary);
    }

    return 0;
}

