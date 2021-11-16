#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

bool check(int n,vector<int>v)
{
    for(int i=0;i<v.size();i++)
    {
        if(n==v[i])
            return true;
    }
    return false;

}
void solve()
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int p;cin>>p;
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int p= v[j]-v[i];
            if(!check(p,v))
            {
                n=n+1;
                v.push_back(p);
            }

        }
    }
    cout<<v.size()<<"\n";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
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
}
