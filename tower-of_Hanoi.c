#include<stdio.h>
void tower(int n,char source,char dest,char aux)
{
  if(n==1)
  {
    printf("Move disk %c from %c",source,dest);
  }
  tower(n-1,source,aux,dest);
  printf("Move disk %c from %c",source,dest);
  tower(n-1,aux,dest,source);
int main()
{
  int no_of_disks;
  scanf("%d",&no_of_disks);
  tower(n,'A','B','C');
  return 0;
}
