#include<stdio.h>
int main()
{
    int a[100],b[100],sum[100],i,n;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
            scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
            scanf("%d",&b[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
            sum[i]=a[i]+b[i];
    }
    for(i=0;i<n;i++)
    {
            printf("%d ",sum[i]);
    }
    return 0;
}
