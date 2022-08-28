//WAP to check weather the given number is divisible by 7 or by 3.

#include<stdio.h>
int main()
{
    int a,i;
    printf("Enter a number\n");
    scanf("%d",&a);
    
    if(a%3==0 || a%7==0)
    {
        printf("%d is divisible by 3 or 7 ",a);
    }
    else
    printf("Not divisible");
    return 0;
}