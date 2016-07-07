#include<stdio.h>
#include<string.h>
int main()
{
  char str[100],t;
  int len,i;
  scanf("%s",str);
  len=strlen(str);
  for(i=0;i<len;i+=2)
  {
    t=str[i];
    str[i]=str[i+1];
    str[i+1]=t;
      printf("%c%c",str[i],str[i+1]);
  }
reurn 0;
}
