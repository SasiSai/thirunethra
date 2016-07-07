#include<stdio.h>
int main()
  {
    int arr[1200],i,n,count,j;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    { count=0;
      for(j=0;j<n;j++)
      {
        if(arr[i]==arr[j])
        {
          count++;
        }
      }if(count==1)
        printf("%d",arr[i]);
    }
    return 0;
  }
    
