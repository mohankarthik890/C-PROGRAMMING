#include <stdio.h>

int main() {
    char str[50];
    int i, length = 0;
    
    printf("\nEnter the string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    printf("\nThe length of the string is %d.", length);
    getchar();
    return 0;
}
