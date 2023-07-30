#include<stdio.h>
int main()
{
    float a,b,c,d,e,f,g,percent;
    printf("Enter marks of 7 subjects....");
    scanf("%f%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f,&g);
    percent= (a+b+c+d+e+f+g)/7;
    if (80<=percent)
    {
        printf("YOU HAVE GOT DISTINCTION");
    }
    else if(60<=percent & 80>percent)
    {
        printf("YOU HAVE GOT 1ST DEVISION");
    }
    else if (45<=percent & 60>percent)
    {
        printf("YOU HAVE GOT 2ND DEVISION");
    }
    else if (32<=percent & 45>percent)
    {
        printf("YOU  HAVE GOT 3RD DEVISION");
    }
    else
      printf  ("U are fail");
    printf("\nYOUR PERCENTAGE IS %f",percent);
    return 0;
}
// Find percentage and show what student is passed in division
