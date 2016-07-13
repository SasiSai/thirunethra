#include<stdio.h>
int main()
{
    int a[100],i,j,n,mid,sum;
    float med;
    scanf("%d\n",&n);
    mid=n/2;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    if(n%2==1)
        {
            printf("%d",a[mid]);
        }
        else
            {
            sum=a[mid]+a[mid-1];
            med=(float)sum/2;
            printf("%.1f",med);
            }
    return 0;
}
