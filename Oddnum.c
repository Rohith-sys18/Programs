#include <stdio.h>
int main() {
    int num, i;
    printf("Enter the num: ");
    scanf("%d", &num);
    printf("Odd numbers from 1 to %d are:\n", num);
    for (i = 1; i < = num; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    return 0;
}

