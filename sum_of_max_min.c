#include<stdio.h>
int main()
{
  int arr[100],max,min,sum,i,n;
  scanf("%d\n",&n);
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
  min=arr[0];
  for(i=1;i<n;i++)
  {
    if(min>arr[i])
      min=arr[i];
  }
  max=arr[0];
  for(i=1;i<n;i++)
  {
    if(arr[i]>max)
      max=arr[i];
  }
  sum=max+min;
  printf("%d",sum);
  return 0;
}
