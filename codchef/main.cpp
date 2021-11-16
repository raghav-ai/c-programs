#include <iostream>
#include<vector>
#include<string>
#include<string.h>
using namespace std;
void solve()
{
    int n ;
    cin>>n;
    string s;string a="";char p='0';
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]==p)
            a=a+s[i];
        if(p=='0'&&s[i]=='1')
        {
            a=a+s[i];
            p='1';
        }
        if(s[i]=='0'&&p=='1')
        {
            int counter=0;
            for(int j=i;j<n;j++)
            {
                if(s[i]=='0')
                   counter++;
                else break;
            } int count=0;
            for(int j=i-1;j>=0;j--)
            {
                if(s[i]=='1')
                   count++;
                else break;
            }
            if(count>counter)
                {i=i+counter-1;p='1';}
            else
            {a=s.substr(0,i-count);p='0';}
        }
    }
    cout<<s.size()-a.size()<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
      solve();
      t--;
    }

    return 0;
}
