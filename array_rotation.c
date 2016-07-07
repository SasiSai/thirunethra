#include<stdio.h>
int main()
{
  int arr[100],i,k,diff,n;
  scanf("%d\n",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  scanf("\n%d",&k);
  diff=n-k;
  for(i=diff;i<n;i++)
  {
    printf("%d",arr[i]);
  }
  for(i=0;i<diff;i++)
  {
    printf("%d",arr[i]);
  }
  return 0;
}
  
