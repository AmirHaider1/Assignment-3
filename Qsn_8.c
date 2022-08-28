//WAP to check weather the given year is leap year or not.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter the year\n");
    scanf("%d",&a);
    
    if(a % 400 == 0)
    {
        printf("Leap year");
    }
    else if(a % 100 == 0)
    {
        printf("Leap Year");
    }
    else if(a % 4 == 0)
    {
        printf("Leap year");
    }
    else
    printf("Not Leap year\n");
    return 0;

}