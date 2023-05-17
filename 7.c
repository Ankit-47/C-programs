#include<stdio.h>
int main()
{
    int a,b,rem;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    rem=a%b;
    if (rem==0)
    
        printf("The number is exactly divisible be second number");
    
    else
    
        printf("the second number donot divide first number exactly");
    
    return 0;
}
