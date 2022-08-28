//WAP to check weather the given number is positive or negative.

#include<stdio.h>
int main()
{
    int i;
    printf("Enter a Number\n");
    scanf("%d",&i);
    if(i>0)
    {
        printf("%d is positive\n",i);
    }
    else if(i<0)
    {
        printf("%d is negative\n",i);
    }
    return 0;
}