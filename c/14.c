#include<stdio.h>
int main()
{
    int num,i,fact=1;
    printf("Enter the number to get factorial:");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
        fact*=i;
    printf("%d is factorial of %d",fact,num);
    getch();
}
//find the factorial of a number

