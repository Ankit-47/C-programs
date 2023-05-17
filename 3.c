#include <stdio.h>
int main ()
{
    int i,sum=0,n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum+=i;
    
    printf("%d",sum);
}