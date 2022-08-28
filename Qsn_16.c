//WAP to check weather a given character is alphabet(uppercase),an alphabet(lowercase),a digit or a special character.

#include<stdio.h>
int main()
{
    char a;
    printf("Enter a character\n");
    scanf("%c",&a);
    if((a>=97) && (a<=122))
    {
        printf("Lowercase");
    }
    else if((a>=65) && (a<=90))
    {
       printf("Uppercase");
    }
    else if((a>=48) && (a<=57))
    {
        printf("Digit");
    }
    else
    printf("special character");
    return 0;

}
