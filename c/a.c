#include <stdio.h>
main()
{
    int day,year,mths,days,a,b;
    printf("Enter number of days");
    scanf("%d",&a);
    year=a/365;
    b=a%365;
    mths=b/30;
    days=b%30;
    printf("year%d",year);
    printf("mths=%d",mths);
    printf("day=%d",days);
    return 0;
}
