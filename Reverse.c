#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the values: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Repeated numbers are: ");
    int foundDuplicate = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                foundDuplicate = 1; 
                break; 
            }
        }
    }

    if (!foundDuplicate) {
        printf("None\n");
    }

    printf("\n");
    return 0;
}

