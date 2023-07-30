//Write a program that takes two arrays of integers as input, and then calculates and prints the dot product of the arrays.
#include <stdio.h>

int main() {
    // Initialize two arrays of integers
    int array1[] = {1, 2, 3};
    int array2[] = {4, 5, 6};
    
    // Calculate the dot product of the arrays
    int dot_product = 0;
    for (int i = 0; i < 3; i++) {
        dot_product += (array1[i] * array2[i]);
    }
    
    // Print the result to the console
    printf("The dot product of the arrays is: %d\n", dot_product);
    
    return 0;
}