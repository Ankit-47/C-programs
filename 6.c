#include<stdio.h>
void main()
{
    int choice;
    printf("CLICK 1 to save file, \t2 to edit,\t 3 to delete:\n");
    printf("\n 1= save\n 2= edit\n 3=delete");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        printf("You have choosed to save file");
        break ;
         case 2:
        printf("You have choosed to edit file");
        break ;
         case 3:
        printf("You have choosed to delete file");
        break;
    default:
    printf("\nINVALID INPUT...");}

    getch();
}