
#include <stdio.h>
#include <string.h>
 
char a[20];
int n, len, j;
 
int main()
{
    int i, index = 0, start = 0;
    scanf("%s", a);
    n = strlen(a);
    scanf("%d", &len);
    for (i  =  1;i < = n;i++)
    {
        if (index - start + 1  ==   i)
        {
            if (i  ==   len)
            {
                for (j  =  index;j < n;j++)
                {
                    for (i  =  start;i < index;i++)
                        printf("%c", a[i]);
                    printf("%c\n", a[j]);
                }
                if (start != i)
                {
                    start++;
                    index = start;
                }
            }
            else
            {
                index++;
            }
        }
    }
    return 0;
}
