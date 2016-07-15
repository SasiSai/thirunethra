#include<stdio.h>
int main()
{
	int a[100],i,n,p,t,k,c1=0,c2=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{       k=0;
		if(a[i]%2!=0)
		{
			t=a[i];
			c1++;
		}
		if(a[i]%2==0)
		{
			p=a[i];
			c2++;
		}
		k++;
	}
	if(c1==1)
	{
		printf("%d",t);
	}
	else
		printf("%d",p);
	return 0;
}


