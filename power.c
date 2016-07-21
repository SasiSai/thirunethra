#include<stdio.h>
int main()
{
  int base_value,exponent,ans=1;
  scanf("%d\n",&base_value);
  scanf("%d",&exponent);
  while(exponent!=0)
  {
    ans=ans*base;
    --exponent;
  }
  printf("%d",ans);
  return 0;
}
