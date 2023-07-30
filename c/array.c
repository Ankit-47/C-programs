//Write a C program that reads in an array of integers and finds the largest and smallest numbers in the array.
#include <stdio.h>

int main() {
    int array[100];
    int largest, smallest, x;

    printf("Enter the size of the array: ");
    scanf("%d", &x);

    printf("Enter %d elements of the array: ", x);
   
    }

    largest = array[0];
    smallest = array[0];
    for(int i = 1; i < x; i++) {
        if(array[i] > largest) {
            largest = array[i];
        }
        if(array[i] < smallest) {
            smallest = array[i];
        }
    }

    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    return 0;
