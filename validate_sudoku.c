#include<stdio.h>
int main()
{
  int a[9][9],i,j,flag=1,sum,temp;
  for(i=0;i<9;i++)
  {
    for(j=0;j<9;j++)
    {
      scanf("%d",&temp);
  if(temp>0 && temp<10)
  {
    a[i][j]=temp;
  }
  else
  {
    flag=0;
    printf("Invalid input");
    break;
  }
  }
  if(flag==0)
    break;
  }
            if(flag)            
         {
               for(i=0;i<9;i++)
               {
                    sum=0;
                    for(j=0;j<9;j++)
                    sum=sum+a[i][j];
                    if(sum!=45)
                       break;            
               }
               if(sum==45)               
               {
                     for(i=0;i<9;i++)
                    {
                          sum=0;
                          for(j=0;j<9;j++)
                          sum=sum+a[j][i];
                          if(sum!=45)           
                          break;        
                    }
                    if(sum==45)                             
                       printf("Valid");
                    else printf("invalid");
               }
               else
                   printf("\n Invalid");
         }
         return 0;
}
