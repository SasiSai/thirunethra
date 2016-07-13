#include<stdio.h>
int main()
{
    int a[100],i,j,n;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j || i+j==n-1)
                printf("%d",a[j]);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
