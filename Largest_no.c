#include<stdio.h>
int main()
{
  int num1,num2,num3,max
  printf("Enter value 1:");
  scanf("%d",&num1);
  printf("\nEnter value 2:");
  scanf("%d",&num2);
  printf("\nEnter value 3:");
  scanf("%d",&num3);
  if(num1>num2 && num1>num3)
  {
    printf("%d is maximum",num1);
  }
  else if(num2>num1 && num2>num3)
  {
    printf("%d is maximum",num2);
  }
  else
    printf("%d is maximum",num3);
  return 0;
}
  
