#include <stdio.h>
#include <string.h>

// Function to convert a character to lowercase (without ctype)
char toLower(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + ('a' - 'A');  // convert uppercase to lowercase
    }
    return ch;
}

// Recursive function to check palindrome
int isPalindrome(char str[], int start, int end) {
    if (start >= end) {
        return 1;  // Base case: all characters checked
    }

    if (toLower(str[start]) != toLower(str[end])) {
        return 0;  // Not a palindrome
    }

    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);  // For simplicity, no spaces

    int length = strlen(str);

    if (isPalindrome(str, 0, length - 1)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
