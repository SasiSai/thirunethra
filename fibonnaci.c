#include<stdio.h>
int main()
{
  int num,c,a=0,b=1,i;
  scanf("%d",&num);
  printf("%d %d",a,b);
  for(i=0;i<num-2;i++)
  {
    c=a+b;
    a=b;
    b=c;
    printf("%d",c);
  }
  return 0;
}
