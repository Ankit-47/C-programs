#include <stdio.h>

void summ(int n[], int size);

int main(){
    int a, n, sum, i;
    printf("Enter the number of arrays: ");
    scanf("%d", &a);
    int b[a];
    printf("Enter the arrays:\n");
    for(i = 0; i < a; i++) {
        scanf("%d", &b[i]);
    }
    n = a;
    summ(b, n);
    return 0;
}

void summ(int n[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += n[i];
    }
    printf("%d is the sum of given arrays\n", sum);
    printf("the average of the given arrays is %d\n", sum / size);
}
