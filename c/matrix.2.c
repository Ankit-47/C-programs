#include<stdio.h>
 int main()
 {
    int a[2][2],b[2][2];
    int i,j;
    int sum[2][2];
    printf("Enter the element in 1st matrix:\n");
    for ( i=0;i<=1;i++)
{
    for( j=0;j<=1;j++){
   scanf("%d",&a[i][j]); }
}
    printf("\nEnter the element for 2nd  matrix:");
    for ( i=0;i<=1;i++)
{
    for( j=0;j<=1;j++){
        scanf("%d",&b[i][j]);
    }
}
for( i=0;i<=1;i++)
{
    for( j=0;j<=1;j++){
    sum[i][j]=a[i][j]+b[i][j];}}
    printf("The sum of entered element is:");
for( i=0;i<=1;i++)
{
    for( j=0;j<=1;j++){
for( i=0;i<=1;i++)
{
    printf("\n");
     for( j=0;j<=1;j++)
    printf("%d  ",sum[i][j]);}
     return 0;
}}
 }
//wap to find sum of element in matrix