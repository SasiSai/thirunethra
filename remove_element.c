#include<stdio.h>
int main()
{
  int arr[100],n,i,ele,found,pos;
  scanf("%d\n",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  scanf("\n%d",&ele);
  for(i=0;i<n;i++)
  {
    if(arr[i]==ele)
    {
      found=1;
      pos=i;
      break;
    }
  }
  if(found==1)
  {
      for(i=pos;i<n-1;i++)
      {
          arr[i]=arr[i+1];
      }
  for(i=0;i<n;i++)
  {
    printf("%d",arr[i]);
  }
  }
  else
    printf("Element not found");
  return 0;
}
