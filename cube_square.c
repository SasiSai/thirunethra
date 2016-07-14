#include<stdio.h>
int main()
{
    int a[100],i,n;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
            scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            printf("%d^3",a[i]);
        }
        else
            printf("%d^2",a[i]);
        if(i!=n-1)
         printf("+");
    }
    return 0;
}
