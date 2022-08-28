//WAP to check weather the given number is positive,negative or zero.

#include<stdio.h>
int main()
{
    int i;
    printf("Enter a number\n");
    scanf("%d",&i);
    if(i>0)
    {
        printf("Positive");
    }
    else if(i<0)
    {
        printf("Negative");
    }
    else
    printf("Zero");
    return 0;
}