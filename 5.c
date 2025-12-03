#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    char *str3;

    // 1. Read two strings from the user
    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // 2. Allocate memory for the concatenated string
    // Length = length of str1 + length of str2 + 1 for '\0'
    str3 = (char *)malloc(strlen(str1) + strlen(str2) + 1);
    if (str3 == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // 3. Concatenate the strings
    strcpy(str3, str1);   // copy first string into str3
    strcat(str3, str2);   // append second string

    // 4. Display the concatenated string
    printf("Concatenated string: %s\n", str3);

    // 5. Free allocated memory
    free(str3);

    return 0;
}
