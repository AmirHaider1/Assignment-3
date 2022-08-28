//WAP to check weather the given number is even or odd without using % operator

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number\n");
    scanf("%d",&i);
    if(i&1)
    {
        printf("Odd");
    }
    else 
    printf("Even");
}