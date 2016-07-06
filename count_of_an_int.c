#include<stdio.h>
int main()
{
  int num,r,count=0;
  while(num>0)
  {
    r=num%10;
    num=num/10;
    count++;
  }
  printf("%d",count);
  return 0;
}
