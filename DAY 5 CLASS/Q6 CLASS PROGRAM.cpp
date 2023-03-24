#include <stdio.h>

int main() {
    int i;
    static int count;
    for(i = 0; i < 5; i += 2) {
        count++;
    }
    printf("%d\n", count);
    return 0;
}
