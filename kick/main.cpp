#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
        int c=0;
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])
            c++;
    }
    cout<<c<<"\n";

}
int main()
{
    int t;
    cin>>t;
    int i=1;
    while(i<=t)
    {
    cout<<"Case #"<<i<<": ";
    solve();
    i++;
    }

    return 0;
}
