//WAP to print greater number between two number.print one number of both are same.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 1st number\n");
    scanf("%d",&a);

    printf("Enter 2nd number\n");
    scanf("%d",&b);

    if(a>b)
    {
        printf("%d is grater number\n",a);
    }
    else if(b>a)
    {
        printf("%d is greater number\n",b);
    }
    else
    printf("\n%d",a);
    return 0;
}