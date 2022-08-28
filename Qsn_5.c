//WAP to check weather the given number is three digit or not.

#include<stdio.h>
int main()
{
    int i,j,k;
    printf("Enter a number\n");
    scanf("%d",&i);
    if(i<=99)
    {
        printf("less than three digit");
    }
    else if (i>999)
    {
        printf("Greater than three digit");
    }
    else 
    printf("Three digit number");
    return 0;
}