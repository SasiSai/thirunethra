#include<stdio.h>
int main()
{
  int arr[1000],i,n,j,count;
  scanf("%d\n",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i,n;i++)
  {
  count=0;
    for(j=1;j<n;j++)
    {
      if(arr[i]==arr[j])
      {
        count++;
      }
    }
  if(count>=1)
  {
    printf("%d",arr[i]);
        break;
  }
}
    return 0;
  }
