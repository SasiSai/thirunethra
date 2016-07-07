#include<stdio.h>
int main()
{
  int  num,f=1,i;
  scanf("%d",&num);
  if(num==0)
    f=1;
  else
  {
  for(i=1;i<num;i++)
  {
    f=f*i;
  }
  }
  printf("%d is factorial of %d",f,num);
  return 0;
}
