#include <stdio.h>
int main() {
	int i;
    int list1[] = {1, 2, 3, 4};
    int list2[] = {5, 6, 7, 8};
     int size1 = sizeof(list1) / sizeof(list1[0]);
    int size2 = sizeof(list2) / sizeof(list2[0]);
    int merged[size1 + size2];
    for (i = 0; i < size1; i++) {
        merged[i] = list1[i];
    }
    for (i = 0; i < size2; i++) {
        merged[size1 + i] = list2[i];
    }
    printf("Merged list: ");
    for (i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}

