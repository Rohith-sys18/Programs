#include <stdio.h>

void removeSpaces(char* str) {
    int j = 0;
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; 
}

int main() {
    char str[] = "r o h i t h";
    removeSpaces(str);
    printf("%s\n", str); 
    return 0;
}

