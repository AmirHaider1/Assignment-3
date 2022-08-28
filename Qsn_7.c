/*WAP to check weathe the root of diven quadratic quation are
real and equal, real and distinct or imaginary root.*/

#include<stdio.h>
int main()
{
    int a,b,c,D;
    printf("Enter the value of a b and c\n");
    scanf("%d %d %d",&a,&b,&c);
    D=b*b-4*a*c;

    if(D>0)
    {
        printf("Roots are distinct and real\n");
    }
    else if(D<0)
    {
        printf("Imaginary roots");
    }
    else
    printf("Real and Equal roots");
    return 0;
}