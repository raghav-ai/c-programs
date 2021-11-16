#include<iostream>
#include<cmath>
//#include<bits/stdc++.h>
using namespace std;

int solve(int t)
{
    int c=0;
   while(t!=1)
   {
       if(t%2==0)
       t/=2;
       else
        t=3*t-1;
       c++;
   }
   return c;

}
int main()
{
    int t=5;
    int m=0;
    while(t>1)
    {
        int q=solve(t);
        if(q>m)
            m=q;
        t--;
    }
    cout<<m;
}
