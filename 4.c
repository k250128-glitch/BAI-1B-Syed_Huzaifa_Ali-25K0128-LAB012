#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter size of the first array: ");
    scanf("%d", &n);

    // 1. Allocate memory using calloc (initialized to 0)
    int *arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // 2. Display initial values (all should be 0)
    printf("First array initialized by calloc:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 3. Modify values
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;  // example values
    }

    printf("First array after modification:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 4. Free the first array
    free(arr);

    // 5. Reuse the same pointer to allocate a new array using malloc
    printf("\nEnter size of the second array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // 6. Modify and display second array
    for (int i = 0; i < n; i++) {
        arr[i] = (i + 1) * 10;  // example values
    }

    printf("Second array after malloc:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 7. Free the second array
    free(arr);

    return 0;
}
