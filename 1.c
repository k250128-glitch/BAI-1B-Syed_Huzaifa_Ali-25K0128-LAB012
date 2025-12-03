#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr;

    // 1. Ask the user for the array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // 2. Dynamically allocate memory
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // exit if allocation fails
    }

    // 3. Read integers from the user
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 4. Print all elements
    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 5. Free the allocated memory
    free(arr);

    return 0;
}
