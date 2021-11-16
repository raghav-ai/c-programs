#include<bits/stdc++.h>
using namespace std;

void revers(vector<int> v)
{
    int cost=0;
    for(int i=0;i<v.size()-1;i++)
    {
        int p= *min_element(v.begin()+i, v.end());
        for(int j=i;j<v.size();j++)
        {
            if(v[j]==p)
                {reverse(v.begin()+i, v.begin()+j+1);
                cost=cost+(j-i+1);

                }
        }
    }
    cout<<cost<<endl;

}
void solve()
{
    int s;
    cin>>s;
    vector<int>v(s);
    for(int i=0;i<s;i++)
        cin>>v[i];
    revers(v);

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
}
