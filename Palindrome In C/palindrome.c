#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[]) {
    int start = 0, end = strlen(str) - 1;
    while (start < end) {
        if (tolower(str[start]) != tolower(str[end])) {
            return 0;  // Not a palindrome
        }
        start++;
        end--;
    }
    return 1;  // Palindrome
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from input
    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str)) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}
