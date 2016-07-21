#include<stdio.h>
#include<string.h>
int main()
{ 
  char input[100];
  scanf("%s",input);
    if(strcmp(input,"Monday")==0)
        printf("True");
                  
    else if(strcmp(input,"Tuesday")==0)
        printf("True");
                  
    else if(strcmp(input,"Wednesday")==0)
        printf("True");
               
    else if(strcmp(input,"Thursday")==0)
        printf("True");
                  
    else if(strcmp(input,"Friday")==0)
        printf("True");
                   
    else if(strcmp(input,"Saturday")==0)
        printf("True");
                   
    else
        printf("False");
            
  return 0;
}
