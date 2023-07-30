#include<stdio.h>
int main()
{
int a, b, temp;
int *c,*d;
printf("Enter two values for swapping:");
scanf("%d %d",&a,&b);
c=&a;
d=&b;
temp=*c;
*c=*d;
*d=temp;
printf("The swapped value is %d and %d",a,b);
return 0;
}