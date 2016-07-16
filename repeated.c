#include<stdio.h>
int main()
{
  int a[100],n,i,j,c;
  scanf("%d\n",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
      c=0;
      for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
         if(c>=1)
                printf("%d ",a[i]);
  }
  return 0;
}
