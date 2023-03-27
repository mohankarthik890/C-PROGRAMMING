//6. Program to remove duplicates from the sorted array
#include <stdio.h>

int main() {
    int array[100],n,i,j,k;
    printf("Enter how many elements in array:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&array[i]);
	}
    

    // remove duplicates
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n;) {
            if (array[j] == array[i]) {
                for (k = j; k < n; k++) {
                    array[k] = array[k + 1];
                }
                n--;
            } else {
                j++;
            }
        }
    }

    // print the updated array
    printf("Array = {");
    for (i = 0; i < n; i++) {
        printf("%d", array[i]);
        if (i != n - 1) {
            printf(", ");
        }
    }
    printf("}");

    return 0;
}

