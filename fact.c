#include<stdio.h>
int main()
{
  int fact=1,num,i;
  scanf("%d",&num);
  if(num==0)
    printf("1");
  else
  {
    for(i=1;i<=num;i++)
    {
      f=f*i;
    }
    printf("%d",f);
  }
  return 0;
}
