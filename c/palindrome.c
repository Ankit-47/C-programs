#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function to read the input string from the user
void read_string(char *str) {
    printf("Enter a string: ");
    fgets(str, 100, stdin);
}

// Function to check if the string contains only letters or numbers
int is_valid_string(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (!isalnum(str[i])) {
            return 0;
        }
    }
    return 1;
}

// Recursive function to check if the string is a palindrome
int is_palindrome(char *str, int start, int end) {
    if (start >= end) {
        return 1;
    }
    if (str[start] == str[end]) {
        return is_palindrome(str, start+1, end-1);
    }
    else {
        return 0;
    }
}

int main() {
    char str[100];
    read_string(str);
    if (!is_valid_string(str)) {
        printf("Invalid input\n");
        return 1;
    }
    int len = strlen(str) - 1;  // Subtract 1 to exclude the newline character
    if (is_palindrome(str, 0, len-1)) {
        printf("The string is a palindrome\n");
    }
    else {
        printf("The string is not a palindrome\n");
    }
    return 0;
}
