#include <iostream>
#include<vector>
using namespace std;
vector<int> v;
void addp()
{
    int c=0;
    for(int i=2;i<1000000;i++)
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
void solve()
{
    int sum=1;int m= 1; double ma=0.0;double d = 0.0;int n=0;
    for(int i =3;i<=1000000;i++)
    {
        m=1;
        if(i%2==0)
        {
            for(int j=1;j<v.size()&&v[j]<i;j++)
            {
                if(i%v[j]!=0)
                    m++;
            }
        }
        else
        {
            for(int j=1;j<v.size()&&v[j]<i;j++)
            {
                if(i%v[j]==0)
                    m++;
            }
            m=m+i/2 ;
        }

        d=(double)i/m;
        if(d>ma)
        {
            n=i;
            ma=d;
            sum=m;
        }

    }
    cout<<n<<"  "<<ma<<"  "<<sum<<endl;
}
int main()
{
   addp();
   solve();
}
