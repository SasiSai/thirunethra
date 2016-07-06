#include<stdio.h>
int main()
{
  int num,minrange,maxrange;
  scanf("%d%d%d",,&num,&minrange,&maxrange);
  while(!(num<=maxrange && num>=minrange))
  {
    printf("Input is an [ERROR] and enter a valid input");
  }
  return 0;
}
      
