#include<stdio.h>
int main()
{
  int min,max,i;
  scanf("%d%d",&min,&max);
  if(min%2!=0)
    min=min+1;
  for(i=min;i<=max;i+=2)
  {
    printf("%d",i);
  }
  return 0;
}
