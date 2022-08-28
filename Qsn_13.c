//WAP to check weather the given numbe is divisible by 3 and by 5.

#include<stdio.h>
int main()
{
    int i;
    printf("Enter a number\n");
    scanf("%d",&i);
    if(i%3==0 && i%5==0)
    {
        printf("Divisible by 3 and 5");
    }
    else
    printf("Not divisible");
    
    return 0;
}