#include <stdio.h>

int main()
{
    int a[100],i,j,n,large;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-2;i++)
    {
        large=i+1;
        for(j=i+2;j<n;j++)
        {
            if(a[large]<a[j])
            {
                large=j;
            }
        }
        a[i]=a[large];
    }
    a[n-2]=a[n-1];
    a[n-1]=0;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
