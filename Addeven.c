#include <stdio.h>

int main() {
    int n, i, number;
    int sum = 0;
    printf("Enter the number of values you want to add: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);
        sum += number; 
    }
    printf("The total sum is: %d\n", sum);

    return 0;
}

