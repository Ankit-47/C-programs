#include<stdio.h>
int main()
{
    float r,area,volume,pi=22/7;
    printf("ENTER THE RADUIS OF A SPHERE:");
    scanf("%f",&r);
    area= 4*pi*r*r;
    printf("%f is the area of sphere\n",area);
    volume= (4*pi*pow(r,3))/3;
    printf("%f is the volume of sphere",volume);
    return 0;

}
//area and volume of sphere..
