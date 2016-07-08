#include <stdio.h>
#include <string.h>

int main(void) {
    long long int n;
    char a[n];
    int j,i,sum=1;
	scanf("%s",&a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	    for(j=i+1;j<=n;j++)
	    {
	      if(a[i]==a[j]){
	         sum=sum+1;
	         i=j;
	          
	      }
	        else
	        {   if(sum==1)
	            {
	                printf("%c",a[i]);
	            }
	            else{
	            printf("%c%d",a[i],sum);}
	            break;
	        }
    	}
      sum=1;
	}
	
return 0;
}
