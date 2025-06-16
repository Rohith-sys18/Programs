#include <stdio.h>

// Binary Search Function
int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) 
            return mid;
        else if (arr[mid] < target) 
            low = mid + 1;
        else 
            high = mid - 1;
    }

    return -1; 
}

int main() {
    int arr[] = {1, 3, 5, 7, 9}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter a number to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, 0, size - 1, target);

    if (result != -1)
        printf("Number found at index %d\n", result);
    else
        printf("Number not found\n");

    return 0;
}

