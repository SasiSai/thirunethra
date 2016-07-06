#include<stdio.h>
int main()
{
  char ch[10];
  scanf("%c",ch);
  if((ch==65 && ch==90)||(ch==96 && ch==122))
    printf("%c is an alphabet",ch);
  else
    printf("%c is not an alphabet",ch);
  return 0;
}
