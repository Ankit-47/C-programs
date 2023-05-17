#include<stdio.h>
int main(){
    int i,a,b;
    printf("enter a number");
    scanf("%d",&a);
    if(a<0)
    goto negative;
    printf("\nenter second number");
    scanf("%d",&b);
    if(b<0)
    -
    goto negative;
        printf ("both are positive");
    negative:
    return 0 ;
    printf("\nEither number is negative...");
    return 0;
}