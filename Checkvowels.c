#include <stdio.h>

int main() {
    char str[100];
    int vowelCount = 0;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
            vowelCount++;
        }
    }

    printf("Total number of vowels: %d\n", vowelCount);

    return 0;
}

