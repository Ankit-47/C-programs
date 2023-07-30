#include<stdio.h>
int main()
{
    int c[50],i, max, min,k;
    printf("ENTER THE NUMBERS:\n");
    scanf("%d",&k);
    printf("\nENTER the numbers...")
    for(i=0;i<k;i++)
    {
        scanf("%d",&c[i]);
    }
    min=c[0];
    max=c[0];
    for(i=1;i<k;i++)
    {
        if(min>c[i])
        min=c[i];
        if(max<c[i])
        max=c[i];
    }
    printf("\nthe max value of input is%d",max);
    printf("\nthe minimum value of input is %d",min);

}
