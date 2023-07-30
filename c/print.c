//WAP to find marks percentage in examination of student and calculate its average and alaso deviation...
#include<stdio.h>
int main()
{
    float marks[10],avg,sum=0,dev;
    printf("Enter marks of 10 student's marks");
    for(int i=0;i<10;i++)
    {
        printf("\n \t marks[%d]=",i);
        scanf("%f",&marks[i]);
        sum+=marks[i];
    }
    avg=sum/10;
    printf("\nthe average of students marks is %.2f",avg);
printf("\n The deviation of each students are: ");
for( int i=0;i<10;i++){
    dev=marks[i]-avg;
    printf("\n marks[%d]=.%2f \t deviaiton=%.2f",i,marks[i],dev);
}
return 0;
}