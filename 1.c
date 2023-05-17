#include<stdio.h>
int main()
{
    int n1,n2,i,num;
    printf("Enter the range where n1<n2:");
    scanf("%d%d",&n1,&n2);
    for(num=n1;num<=n2;num++)
    {
        for(i=2;i<=num;i++){
            if(num%i==0)
            break;
        }
        if(i==num){
            printf("1\t%d",num);
        }
    }
}