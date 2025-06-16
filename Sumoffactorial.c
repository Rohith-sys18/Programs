#include <stdio.h>
int i;
unsigned long long factorial(int num) {
    unsigned long long result = 1;
    for (i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n,i;
    unsigned long long sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Sum of factorials is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= n; i++) {
            sum += factorial(i);
        }
        printf("Sum of factorials from 1 to %d = %llu\n", n, sum);
    }

    return 0;
}

