#include<stdio.h>
int main()
{
  int r,num;
  scanf("%d",&num);
  while(num!=0)
  {
    r=num%10;
    num=num/10;
    printf("%d",r);
  }
  return 0;
}
