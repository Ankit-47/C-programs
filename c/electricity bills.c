
#include<stdio.h>
int main()
{
    int units;
    float bills;
    printf("ENTER THE NUMBER OF UNIT CONSUMED:");
    scanf("%d",&units);
    if (units<=20){
        printf("your bill is of rs 80");}
    else if(units<=120){

        bills= 80+(units-20)*7.3;
    printf("%f is your amount of bill",bills);}
        else{bills= 80+100*7.30+(units - 120)*9;

         printf("THE amount of bill you have get is %f",bills);}
return 0;
}
