#include <stdio.h>
#include <ctype.h>

int countDigits(char *arr[], int size) {
    int count = 0;
    int i,j;
    for (i = 0; i < size; i++) {
        for (j = 0; arr[i][j] != '\0'; j++) {
            if (isdigit(arr[i][j])) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    char *array[] = {"123", "45", "67abc", "hello", "-10"};
    int size = sizeof(array) / sizeof(array[0]);
    printf("Total digits: %d\n", countDigits(array, size));
    return 0;
}

