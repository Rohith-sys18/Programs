#include <stdio.h>
#include <string.h>

void findDistinctCharactersWithCount(char *str) {
    int count[256] = {0}; 
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }
    
    printf("Distinct characters with their counts:\n");
    for (i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("%c: %d\n", i, count[i]);
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  
    findDistinctCharactersWithCount(str);
    return 0;
}

