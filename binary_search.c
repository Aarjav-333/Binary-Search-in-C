#include <stdio.h>

int main() {
    int left, right, middle, n, i, value;

    printf("Enter the size of the array\n");
    scanf("%d", &n);

    int array[n];

    printf("Enter the elements of the array in ascending order\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("\nSorted Array\n");
    for (i = 0; i < n; i++) {
        printf("%d  ", array[i]);
    }

    printf("\nEnter the value to search in the array\n");
    scanf("%d", &value);

    left = 0;
    right = n - 1;
    middle = (left + right) / 2;

    while (left <= right) {
        if (array[middle] == value) {
            printf("%d found at position %d\n", value, middle + 1);
            break;
        } else if (array[middle] < value) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
        middle = (left + right) / 2;
    }

    if (left > right) {
        printf("\nElement is not in the array\n");
    }

    return 0;
}
