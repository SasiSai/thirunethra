#include<stdio.h>
int main()
{
  int arr[100],n,i,target,j;
  scanf("%d\n",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  scanf("\n%d",&target);
  for(i=0;i<n;i++)
  {
    for(j=1;j<n;j++)
    {
      if(arr[i]+arr[j]==target)
      {
        printf("%d,%d",arr[i],arr[j]);
        break;
      }
    }
  }
  return 0;
}
