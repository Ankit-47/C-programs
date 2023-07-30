//Write a C program to calculate the sum of elements in an array.
#include <stdio.h>

int main() {
    int array[100], n, i;
    int sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        sum += array[i]; // add the current element to the running total
    }

    printf("Sum of elements in the array: %d\n", sum);

    return 0;
}
