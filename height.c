#include<stdio.h>
int main() {
	// your code goes here
	int a[100],n,i,j,temp,p,k;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("\n%d",&k);
    for(i=0;i<(n-1);i++)
    {
        p=i;
        for(j=i+1;j<n;j++)
        {
            if(a[p]<a[j])
            {
                p=j;
            }
        }
        if(p!=i)
        {
            temp=a[i];
            a[i]=a[p];
            a[p]=temp;
        }
    }
        printf("%d ",a[k-1]);
    return 0;
}

