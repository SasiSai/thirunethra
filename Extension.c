#include<stdio.h>
#include<string.h>
int main()
{
  char a[100];
  int i,len,temp;
  scanf("%s",a);
  len=strlen(a);
  for(i=0;i<len;i++)
  {
      if(a[i]=='.')
      {
    temp=i+1;
  for(i=temp;i<=len;i++)
  {
    printf("%c",a[i]);
  }
  break;
      }
  }
  return 0;
}
