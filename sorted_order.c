#include <stdio.h>

int main(void) {
    // your code goes here
    int a[100],i,j,p,n,temp,s[100],count=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s[i]=a[i];
    }
    for(i=0;i<(n-1);i++)
    {
        p=i;
        for(j=i+1;j<n;j++)
        {
            if(a[p]>a[j])
                p=j;
        }
        if(p!=i)
        {
            temp=a[i];
            a[i]=a[p];
            a[p]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==s[i])
            count++;
    }
    if(count==n)
        printf("They are in sorted order");
    else
        printf("Elements are not in sorted order");
    return 0;
}
