#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int size;
    char *str;

    // 1. Ask user for the maximum size of the string
    printf("Enter the maximum length of the string: ");
    scanf("%d", &size);

    // 2. Allocate memory dynamically
    str = (char *)malloc((size + 1) * sizeof(char)); // +1 for '\0'
    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // 3. Read a line of text including spaces
    printf("Enter a string: ");
    getchar(); // consume leftover newline from previous input
    fgets(str, size + 1, stdin);

    // Remove newline character if present
    size_t len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    // 4. Print the string in reverse
    printf("Reversed string: ");
    for (int i = len - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");

    // 5. Free allocated memory
    free(str);

    return 0;
}
