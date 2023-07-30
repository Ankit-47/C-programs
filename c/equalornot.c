//show that the matrix are equal or not.
#include<stdio.h>
int main()
{
    int m,n,i,j,s[30][30],t[30][30],flag=0;
    printf("Enter size of matrix");
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d%d",&s[i][j],&t[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++){
            if(s[i][j]!=t[i][j])
            flag=1;
            break;
        }
}
if(flag=0){
printf("Equal matrix");
}
else{
    printf("Not equal");
}
return 0; }