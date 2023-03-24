#include <stdio.h>
#include <string.h>

struct date {
    int day;
    int month;
    int year;
};

struct student {
    char name[20];
    int roll_no;
    struct date dob;
};

int main() {
    struct student s;

    strcpy(s.name, "John");
    s.roll_no = 123;
    s.dob.day = 15;
    s.dob.month = 3;
    s.dob.year = 2000;

    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("DOB: %d-%d-%d\n", s.dob.day, s.dob.month, s.dob.year);

    return 0;
}
