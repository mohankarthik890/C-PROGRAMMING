#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 50
#define MAX_NAME_LEN 50

// Define a struct for address
typedef struct {
    char street[MAX_NAME_LEN];
    char city[MAX_NAME_LEN];
    char state[MAX_NAME_LEN];
    int pincode;
} Address;

// Define a struct for student
typedef struct {
    char name[MAX_NAME_LEN];
    int roll_number;
    Address address;
    float marks;
} Student;

int main() {
    Student students[MAX_STUDENTS];
    int num_students, i, j;

    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    // Read in student details
    for (i = 0; i < num_students; i++) {
        printf("\nEnter details for student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll number: ");
        scanf("%d", &students[i].roll_number);
        printf("Address:\n");
        printf("  Street: ");
        scanf("%s", students[i].address.street);
        printf("  City: ");
        scanf("%s", students[i].address.city);
        printf("  State: ");
        scanf("%s", students[i].address.state);
        printf("  Pincode: ");
        scanf("%d", &students[i].address.pincode);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display student details
    printf("\n\nStudent Details:\n");
    for (i = 0; i < num_students; i++) {
        printf("\nDetails for student %d:\n", i+1);
        printf("Name: %s\n", students[i].name);
        printf("Roll number: %d\n", students[i].roll_number);
        printf("Address:\n");
        printf("  Street: %s\n", students[i].address.street);
        printf("  City: %s\n", students[i].address.city);
        printf("  State: %s\n", students[i].address.state);
        printf("  Pincode: %d\n", students[i].address.pincode);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
