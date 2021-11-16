#include <iostream>
#include<vector>
using namespace std;
vector<int> solve(vector<int>b,int s)
{
    if(b.size()==4)
        {
            for(int i=0; i < b.size(); i++)
            cout << b.at(i) << ' ';
            cout<<"\n";
            b.pop_back();
            return b;
        }
    else
    {
        b.push_back(0);
        solve(b,s+1);
        b.pop_back();
        b.push_back(1);
        solve(b,s+1);
        return b;
    }
}

int main()
{
    string s;
    cin>>s;
    vector<int>v(s.size());
    vector<int> a(s.size());
    int c=0;
    solve();
    return 0;
}
