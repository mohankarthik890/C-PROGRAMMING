#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, 100, stdin);

    int len = strlen(sentence);
    int word_start = 0;
    int word_end = 0;

    printf("Consonants: ");
    for (int i = 0; i < len; i++) {
        char c = sentence[i];
        if (c == ' ' || c == '\n' || c == '\t' || i == len - 1) {
            word_end = i - 1;
            if (i == len - 1) {
                word_end = i;
            }
            for (int j = word_start; j <= word_end; j++) {
                char ch = sentence[j];
                if (ch >= 'A' && ch <= 'Z') {
                    ch += 32;
                }
                if (ch >= 'a' && ch <= 'z') {
                    if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
                        printf("%c", ch);
                    }
                }
            }
            printf(" ");
            word_start = i + 1;
        }
    }
    printf("\n");

    printf("Vowels: ");
    word_start = 0;
    for (int i = 0; i < len; i++) {
        char c = sentence[i];
        if (c == ' ' || c == '\n' || c == '\t' || i == len - 1) {
            word_end = i - 1;
            if (i == len - 1) {
                word_end = i;
            }
            for (int j = word_start; j <= word_end; j++) {
                char ch = sentence[j];
                if (ch >= 'A' && ch <= 'Z') {
                    ch += 32; 
                }
                if (ch >= 'a' && ch <= 'z') {
                    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                        printf("%c", ch);
                    }
                }
            }
            printf(" ");
            word_start = i + 1;
        }
    }
    printf("\n");

    return 0;
}
