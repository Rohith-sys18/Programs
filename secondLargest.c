#include <stdio.h>
int findSecondLargest(int arr[], int size) {
    int first = -1, second = -1;int i;

    for (i = 0; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }
    return second;
}
int main() {
    int arr[] = {10, 20, 4, 45, 99};
    int size = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, size);
    printf("The second largest element is: %d\n", secondLargest);

    return 0;
}
