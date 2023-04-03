#include <stdio.h>

int main() {
    int n,i, key;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the key to search: ");
    scanf("%d", &key);

    // Perform linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("%d found at index %d.\n", key, i);
            break;
        }
    }

    if (i == n) {
        printf("%d not found in the array.\n", key);
    }

    return 0;
}
