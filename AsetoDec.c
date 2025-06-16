#include <stdio.h>

int main() {
    printf("Numbers in ascending order:\n");
    int i;
    for (i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");
    printf("Numbers in descending order:\n");
    for (i = 5; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

