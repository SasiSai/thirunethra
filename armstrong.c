#include<stdio.h>
int main()
{
  int num,r,n=0,d;
  scanf("%d",&d);
  scanf("%d",&num);
  while(num>0)
  {
    r=num%10;
    n=n+r^d;
    num=num/10;
  }
  if(n==num)
    printf("%d is a armstrong number",num);
  else
    printf("%d is not an armstrong number",num);
  return 0;
}
