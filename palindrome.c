#include <stdio.h>

int main()
{
    int a,i=0,n=0,b[100],count=0,c,d[100],j;
    scanf("%d\n",&a);
    int temp=a;
    while(a>0)
    {   
        c=a%10;
        a=a/10;
        d[i]=c;
        i++;
        n++;
    }
    for(j=0,i=n-1;j<n && i>=0;i--,j++)
        b[j]=d[i];
    for(i=0,j=0;i<n && j<n;i++,j++)
    {
        if(d[i]==b[j])
            count++;
    }
    if(count==n)
        printf("%d is a palindrome",temp);
    else
        printf("%d is not a palindrome",temp);
    return 0;
}
