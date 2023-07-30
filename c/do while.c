#include <stdio.h>
main()
{

    int i,a=0,b=1,c,n;

    printf("enter  digit");
    scanf("%d",&n);
    do
    {
        c=a+b;

        printf(" the fibonacci series is %d \n",c);
        b=a;
        a=c;
c=a+b;
i++;

    }
    while(i<=n);

    return 0;
}

