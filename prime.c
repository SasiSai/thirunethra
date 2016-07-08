#include<stdio.h>
main()
{
int n,i,flag=0;
clrscr();
printf("Enter the no");
scanf("%d",&n);
if(n<=0||n==1)
{
printf("%d is not a prime no",n);
}
else if(n==2)
{
printf("2 is a prime No");
}
else
{
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			flag++;
		}
	}
			if(flag==2)
			{
				printf("%d is a prime no",n);

			}
			else
			{
				printf("%d is not a prime no",n);

			}


}
}
