#include <iostream>
#include<vector>
using namespace std;
void solve()
{
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int c=0;int m=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            continue;
            m=arr[i];
            arr[i]=0;
        for(int j=i;j<n;j++)
        {
            if(arr[j]>m)
            {m=arr[j];
             arr[j]=0;
            }
        }
        c++;
    }
    cout<<c;
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
