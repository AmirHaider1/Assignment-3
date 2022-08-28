//WAP to find greatest among three given number.Print once if the greatest number appear two or three times.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 1st number ");
    scanf("%d",&a);

    printf("Enter 1st number ");
    scanf("%d",&b);

    printf("Enter 1st number ");
    scanf("%d",&c);

    if(a>b && a>c)
    {
        printf("%d is greater number",a);
    }
    else if(b>a && b>c)
    {
        printf("%d is grater number",b);
    }
    else if(b==c)
    {
        printf("%d",b);
    }
    else if(a==b)
    {
    printf("%d",a);
    }
    else if(a==c)
    {
        printf("%d",a);
    }
     else if(c>a && c>b)
    printf("%d is greater number\n",c);
}