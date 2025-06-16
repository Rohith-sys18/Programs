#include <stdio.h>

int countDigits(int arr[], int size) {
    int count = 0;
    int i;
    for (i = 0; i < size; i++) {
        int num = arr[i] < 0 ? -arr[i] : arr[i]; 
        do {
            count++;
            num /= 10;
        } while (num > 0);
    }
    return count;
}

int main() {
    int array[] = {123, 45, 6789, -10};
    int size = sizeof(array) / sizeof(array[0]);
    printf("Total digits: %d\n", countDigits(array, size));
    return 0;
}

