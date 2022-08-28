//WAP to check weather the given alphabet is in upper case or lower case

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
    printf("Uppercase");
    return 0;
}