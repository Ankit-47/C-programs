#include <stdio.h>

int main() {
    int x;
    printf("Enter number of elements you want in array: ");
    scanf("%d", &x);
    int arr[x];  
    printf("Enter the elements in the array:\n");
    for (int i = 0; i < x; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];  
    for (int i = 1; i < x; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("The largest element in the array is %d", max);
    return 0;
}
// wap to show highest element in array