#include <iostream>
#include <vector>
using namespace std;
vector<int>v;

void prime()
{
    int c=0;
    for(int i=2;i<100000;i++)
    {
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c=1;break;
            }
        }
        if(c==0)
            v.push_back(i);
        c=0;
    }
}
bool check4(int i)
{
    int c=0;int p=0;
    while(v[c]<i)
    {
        if(i%v[c]==0)
        {
            i= i/v[c];p++;
        }
            c++;
        if(p==3)
            return true;
    }
    return false;
}
int main()
{
    prime();int q=0;

    for(int i=250;i<1000;i++)
    {
        if(check4(i))
            {q++;cout<<i<<endl;}
        else
            q=0;
        if(q==3)
        {
            cout<<i-2;
            break;
        }
    }
}
