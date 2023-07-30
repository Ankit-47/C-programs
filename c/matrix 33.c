//Display 3*3 matrix
#include<stdio.h>
int main()
{
    int j,i;
    int a[3][3];
    for (j=0;j<=2;j++)
{
    for(i=0;i<=2;i++){
        scanf("%d",&a[j][i]);
    }
}

   for (j=0;j<=2;j++)
{
    for(i=0;i<=2;i++){
      printf(" %d",a[j][i]);
    }
    printf("\n");
}
}