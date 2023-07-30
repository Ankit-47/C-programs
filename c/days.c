#include<stdio.h>
int main()
{
    int year,mths,days,a;
    printf("Enter the year,mths,days of yours");
    scanf("%d%d%d",&year,&mths,&days);
    a=year*365+mths*30+days;
    printf("the age in day is%d",a);
    getch ();
}
