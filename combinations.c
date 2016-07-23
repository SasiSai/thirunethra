#include <stdio.h>

int main()
{
    int n,k,i,j;
    scanf("%d\n%d",&n,&k);
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            printf("[%d,%d]",i,j);
        }
    }
    return 0;
}
