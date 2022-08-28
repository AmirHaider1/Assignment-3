/*WAP which takes the cost price and the selling price of product from the user.
Now calculate and print profit or loss percentage.*/

#include<stdio.h>
int main()
{
    int cp,sp,p,l;
    printf("Enter the cost price\n");
    scanf("%d",&cp);
    printf("Enter the selling price\n");
    scanf("%d",&sp);

    if(cp>sp)
    {
        l=(cp-sp)*100;
        l=l/sp;
        printf("Loss percentage is %d",l);
    }
    else if(sp>cp)
    {
        p=(sp-cp)*100;
        p=p/cp;
        printf("Profit percentage is %d ",p);
    }
    else
    printf("No profit");
    return 0;
}