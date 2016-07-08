#include<stdio.h>
#include<string.h>
int main()
{
  char a[100],b[100];
  int i,j,len1;
  scanf("%s",a);
  scanf("\n%s",b);
  len1=strlen(a);
  for(i=0;i<len1;i++)
  {
      if(a[i]==b[i])
      {
        printf("%c",a[i]);
      }
      else
        break;
  }
  return 0;
}
