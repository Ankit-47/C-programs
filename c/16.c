//find whether enter 2 number's product is greater than both or not..
#include<stdio.h>
int main()
{
    float a,b,i,c;
    printf("ENTER TWO NUMBER TO FIND PRODUCT:");
    scanf("%f%f",&a,&b);
    c=a*b;
    if(c<a){
        printf("%f is greater than product",a);

    }
    else if(c<b){
        printf("\n%f is grater",b);

    }
    else if(c>b)
    {
        printf("\n%f is smaller then product",b);
        }
        else if (c>a)
            {
        printf("\n %f is smaller then product ",a);
    }
printf("\n AS %f is product of input",c);
getch();
}
