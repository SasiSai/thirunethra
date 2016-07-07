#include<stdio.h>
int main()
{
  int arr[100],c,d,pos,temp,n;
  scanf("%d\n",&n);
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
  for(i=0;i<n-1;i++)
  {
    pos=i;
    for(d=i+1;d<n;d++)
    {
      if(arr[pos]>arr[d])
        pos=d;
      }
      if(pos!=i)
      {
        temp=arr[i];
        arr[i]=arr[pos];
        arr[pos]=temp;
      }
    }
  printf("%d",arr[i+1]);
  return 0;
}
