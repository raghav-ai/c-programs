#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector <int>p;
int addp()
{
    p.push_back(2);int c=0;int sum=2;
    for(int i=3;i<1000000;i=i+2)
    {
        for(int j=0;j<p.size();j++)
        {
            if(i%p[j]==0)
            {c=1;break;}
        }
        if(c==0)
          {
              p.push_back(i);
              if(sum+i<1000000)
              sum=sum+i;
          }

        c=0;
    }
    cout<<sum<<endl;
    return sum;

}
void con(int n)
{
   int en= 0;
   while(true){

   vector<int>::iterator it = find(p.begin(), p.end(), n);
    if (it != p.end())
        {cout<<n<<endl;break;}
        else
        {
            n=n-p[en];
            en=en+1;
        }
    }
}
int main()
{
    int n=addp();
    con(n);
    cout<<p.size()<<endl;


}
