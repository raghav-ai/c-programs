#include <iostream>
#include<cmath>
#include<string>
using namespace std;
void solve()
{
    int n,k,l;
    cin>>n>>l;
    k=l;int p=0;

        while(true)
        {
            if(n==k)
                {cout<<1<<"\n";break;}
            else if(n<k)
            {
                if(k%n==0)
                 p=k/n;
                else
                 p=k-(n-1)*(k/n);
                cout<<p;
                break;
            }
            else
                k=k+l;
        }

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

