#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int emp_no;
    char name[50];
    float salary;
    struct Date date_of_joining;
};

int main() {
    struct Employee emp;

    printf("Enter employee number: ");
    scanf("%d", &emp.emp_no);

    printf("Enter employee name: ");
    scanf("%s", emp.name);

    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    printf("Enter date of joining (dd mm yyyy): ");
    scanf("%d %d %d", &emp.date_of_joining.day, &emp.date_of_joining.month, &emp.date_of_joining.year);

    printf("\nEmployee Details\n");
    printf("-----------------\n");
    printf("Employee number: %d\n", emp.emp_no);
    printf("Employee name: %s\n", emp.name);
    printf("Employee salary: %.2f\n", emp.salary);
    printf("Date of joining: %d-%d-%d\n", emp.date_of_joining.day, emp.date_of_joining.month, emp.date_of_joining.year);

    return 0;
}
