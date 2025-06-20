#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int length = strlen(str);
    int i;length;

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0;  // Not a palindrome
        }
    }

    return 1;  // It's a palindrome
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

