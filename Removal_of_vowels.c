#include<stdio.h>
int main()
{
  char str[100],rev[100];
  int i,len;
  scanf("%s",str);
  rev=strrev(str);
  len=strlen(rev);
  printf("%s",rev);
  for(i=0;i<len;i++)
  {
    if(rev[i]!='a' || rev[i]='e' || rev[i]!='i' || rev[i]='o' || rev[i]!='u' || rev[i]='A' || rev[i]!='E' || rev[i]='I' || rev[i]!='O' || rev[i]='U')
    {
      printf("%c",rev[i]);
    }
  }
  return 0;
}
    
