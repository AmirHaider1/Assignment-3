//WAP which takes the length of the side of the triangle as an input.Display the triangle is valid or not.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the side of the trianngle\n");
    scanf("%d %d %d",&a,&b,&c);

    if(a+b>c && a+c>b && b+c>a)
    {
        printf("Triangle is valid");
    }
    else
    printf("Not valid");
    return 0;
}