#include<stdio.h>
int main()
{
  int n,arr[100],i,greatest;
  scanf("%d\n",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",arr[i]);
  }
  greatest=arr[0];
  for(i=1;i<n;i++)
  {
    if(arr[i]>greatest)
      greatest=arr[i];
  }
  printf("%d",greatest);
  return 0;
}
