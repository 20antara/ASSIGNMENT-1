#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char number[10];
    int length;
    printf("Enter the number: ");
    scanf("%s", number);
    length= strlen(number);

    int flag=0;

    while(length--)
    {
         if(number[length]=='.')
         {
            flag=1;
            break;
         }
    }
    if(flag)
    {
        printf("Valid floating number.");
    }
    else{
        printf("Invalid floating number");
    }

    getch();
    return 0;


}