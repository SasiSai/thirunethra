#include<stdio.h>
int main()
{
  int arr[100],n,i,j;
  scanf("%d\n",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
      if(arr[i]==i)
        printf("%d ",i);
  }
  return 0;
}
