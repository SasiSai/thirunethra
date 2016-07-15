#include<stdio.h>
int main()
{
  int a[100],i,n,no_to_add,index,k=0,b[100];
  scanf("%d\n",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  scanf("\n%d",&no_to_add);
  scanf("\n%d",&index);
  for(i=0;i<n;i++)
  {
      if(index!=i)
      {
        b[k]=a[i];
        printf("%d ",b[k]);
      }
      if(index==i)
        {
            b[k]=no_to_add;
           printf("%d %d ",b[k],a[i]);
        }
        k++;
  }
  return 0;
}
