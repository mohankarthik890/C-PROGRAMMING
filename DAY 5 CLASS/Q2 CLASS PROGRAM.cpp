#include <stdio.h>

struct student {
    int number;
    char grade;
};

int main() {
    int n, i, count_A = 0, count_B = 0, count_C = 0, count_D = 0, count_F = 0;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student students[n];
    for(i = 0; i < n; i++) {
        printf("Enter details of student %d (Number, Grade): ", i+1);
        scanf("%d %c", &students[i].number, &students[i].grade);
        switch(students[i].grade) {
            case 'A':
                count_A++;
                break;
            case 'B':
                count_B++;
                break;
            case 'C':
                count_C++;
                break;
            case 'D':
                count_D++;
                break;
            case 'F':
                count_F++;
                break;
        }
    }
    for(i = 0; i < n; i++) {
        printf("\nStudent %d details:\nNumber: %d\nGrade: %c\n", i+1, students[i].number, students[i].grade);
    }
    printf("\nTotal number of A: %d, B: %d, C: %d, D: %d, F: %d\n", count_A, count_B, count_C, count_D, count_F);
    return 0;
}
