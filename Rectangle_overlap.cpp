#include<iostream.h>
#include<bits/stdc++.h>
typedef struct point
{
  int p1,p2;
  }p;
  bool overlap(p top_left1,p top_left2,p bot_right1,p bot_right2)
  {
    if(top_left1.p1>bot_right2.p1 || top_left2.p1>bot_right1.p1)
      return false;
    if(top_left1.p2>bot_right2.p2 || top_left2.p2>bot_right1.p2)
      return false;
    return true;
  }
  int main()
  {
    int top_left1,top_left2,bot_right1,bot_right2;
    cout<<"Top left coordinate of 1st rectangle";
    cin>>top_left1.p1>>top_left1.p2;
    cout<<"Top left coordinate of 2nd rectangle";
    cin>>top_left2.p1>>top_left2.p2;
    cout<<"Bottom right coordinate of 1st rectangle";
    cin>>bot_right1.p1>>bot_right1.p2;
      cout<<"Bottom right coordinate of 2nd rectangle";
    cin>>bot_right2.p1>>bot_right2.p2;
  if(overlap(top_left1,top_left2,bot_right1,bot_right2))
    printf("Rectangles overlap);
  else
    printf("Rectangles do not overlap");
  return 0;
}
