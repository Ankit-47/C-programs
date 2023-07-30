//WAP to read 10 integer and display those in array element in screen..
#include<stdio.h>
int main()
{
    int a[10],i;
    printf("Enter number of element inside arrays");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);}
        printf("you have entered these 10 elements:");
    for(i=0;i<10;i++){
        printf("\ta[%d]=%d",i,a[i]);
    }
    return 0;
}