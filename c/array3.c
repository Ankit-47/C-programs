//Write a program that takes an array of integers as input, and then calculates and prints the sum of the squares of the even integers in the array.
#include <stdio.h>

int main() {
int n,i,sum=0,sq;
int array[100];
printf("enter numbers of arrys");
scanf("%d",&n);
printf("Enter element of %d arrays",n);
for(i=0;i<n;i++){
    scanf("%d",&array[i]);
    if(array[i]%2==1){
sq =pow (array[i],2);
sum+=sq;
    }
}
printf("the sum of square of even number in arrays is%d",sum);
}
