#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the values: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int rev[n];
    for (int i = 0; i < n; i++) {
        rev[i] = arr[n - 1 - i];
    }
    printf("The reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", rev[i]);
    }
    
    printf("\n");
    return 0;
}

