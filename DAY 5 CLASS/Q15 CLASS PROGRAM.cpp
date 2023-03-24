#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x);

int main() {
    int arr[] = {2, 5, 7, 9, 11, 13, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 11;
    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", result);
    return 0;
}

int binarySearch(int arr[], int l, int r, int x) {
    if (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        else
            return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
