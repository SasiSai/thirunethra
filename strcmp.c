#include<stdio.h>
#include<string.h>
int main()
{
  int len1,len2,count=0,i;
  char a[100],b[100];
  len1=strlen(a);
  len2=strlen(b);
  for(i=0;i<len1;i++)
  {
    for(j=i;j<len2;j++)
    {
      if(a[i]==b[j])
      {
        count++;
        break;
        }
    }
  }
  if(count==len1)
    printf("Same strings");
  return 0;
  }
