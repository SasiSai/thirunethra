#include<stdio.h>
void low(string str,int n,string &res)
{
  if(n==0)
  {
    res.append(str);
    return;
  }
  int len=str.length;
  if(len<=len)
    return;
  int min=0;
  for(int i=1;i<=n;i++)
  {
    if(str[i]<str[min])
    {
      min=i;
    }
res.push_back(str[min])
string new=str.substr(min+1,len-min);
buildlow(new_str,n-min,str);
}
string low(string str,int n)
{
  string res="";
  low(str,n,res);
  return res;
}
int main()
{
string str="12312";
int n=2;
cout<<low(str,n);
return 0;
}
  
