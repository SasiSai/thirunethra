#include <stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int len1,len2,i,count=0,j;
    scanf("%s\n",str1);
    scanf("%s",str2);
    len1=strlen(str1);
    len2=strlen(str2);
    for(i=0;i<len1;i++)
    {
        count=0;
        for(j=0;j<len2;j++)
        {
            if(str1[i]==str2[j])
            {
                i++;
                count++;
            }
        }
    
        if(count==len2)
        {
            printf("%d",i-len2+1);
            break;
        }
        else if(count==0)
        {
            continue;
            printf("1");
            break;
        }
        else
        {
            printf("-1");
            break;
    }
    }
    return 0;
}
