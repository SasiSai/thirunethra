#include<stdio.h.
void subarray(int a[],int size)
{
  int i,starti=0,endi=0,curstarti=0,maxsum=0,cursum=0;
  for(i=0;i<size;i++)
  {
    cursum=cursum+a[i];
  if(cursum>maxsum)
  {
    maxsum=cursum;
    endi=i;
    starti=curstarti;
  }
  if(cursum<0)
  {
    curstarti=i+1;
    curstarti=0;
  }
}
for(i=starti,i<endi;i++)
{
printf("%d",a[i]);
}
}
int main()
{
  int arr[]={1,-3,5,-2,9,-8,6,4};
  int size=sizeof(arr)/sizeof(arr[0]);
  subarray(arr[],size);
return 0;
}
