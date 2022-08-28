/*WAP to take marks of 5 subjects from the user.Assume marks are out of 100 and passing marks is 33.
Now display weather the candidate passed the examination or failed.*/

#include<stdio.h>
int main()
{
    int p,c,m,h,e;
    printf("Enter the marks of 5 subjects\n");
    scanf("%d %d %d %d %d",&p,&c,&m,&h,&e);
    
  if(p>=33 && c>=33 && m>=33 && h>=33 && e>=33)
  {
    printf("Candidate is pass\n");
  }
  else
  printf("Candidate is fail\n");
  return 0;
}