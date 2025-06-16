#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void findDistinctCharacters(const char *str) {
    bool seen[256] = { false };  
    printf("Distinct characters: ");
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (!seen[(unsigned char)ch]) { 
            seen[(unsigned char)ch] = true; 
            printf("%c ", ch); 
        }
    }
    printf("\n");
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  
    findDistinctCharacters(str);
    return 0;
}

