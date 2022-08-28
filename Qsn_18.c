//WAP which takes the month number as an input and display number of days in that month.

#include<stdio.h>
int main()
{
    int i;
    printf("Enter the month number\n");
    scanf("%d",i);
    
    if(i==1 || i==3 || i==5 || i==7 || i==9 || i==11)
    {
        printf("31");
    }
    else if(i==4 || i==6 || i==8 || i==10 || i==12)
    {
        printf("30");
    }
    else if("i==2")
    {
        printf("28/29");
    }
    else
    printf("Invalid Month");
    return 0;
}