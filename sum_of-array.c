#include<stdio.h>
int main()
{
  int a[100],i,n,t,sum=0;
  scanf("%d\n",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  scanf("\n%d",&t);
  for(i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
  if(sum==t)
  {
    printf("TRUE");
  }
  else
    printf("FALSE");
  return 0;
}
