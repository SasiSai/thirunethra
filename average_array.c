#include<stdio.h>
int main()
{
  int sum=0,arr[100],avg,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
  for(i=0;i<n;i++)
  {
    sum=sum+arr[i];
  }
  avg=sum/n;
  printf("%d",avg);
  return 0;
  }
  
