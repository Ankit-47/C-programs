#include <stdio.h>
int  main()
{
    char c;
    printf("Enter a character");
    scanf("%c",&c);
    if(c>=97 && c<=122)
    {
        c-=32;
      printf("the character equivalence in uppercase is %c",c);  
    }
    else if( c>=65 && c<=97){
        c+=32;
    
    printf("the character equivalence in lowercase is %c",c);}
     else {
        printf("invalid input");
     }
     return 0;
}