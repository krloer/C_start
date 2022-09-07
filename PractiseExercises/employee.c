#include <stdio.h>

int main() {
    char ID[100];
    int hours;
    int salary_hour;
    printf("Salary Calculator\n\n");
    printf("Input employee ID: ");
    scanf("%s", ID);

    printf("Input working hours:");
    scanf("%d", &hours);
    printf("Input salary/hr (in dollars):");
    scanf("%d", &salary_hour);
    printf("\n");

    int salary = hours * salary_hour;
    printf("Employees' ID: %s\n", ID);
    printf("Salary: USD %d\n", salary);
}