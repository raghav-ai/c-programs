#include <iostream>

using namespace std;
int pal(int n)
{
    int t=n;int p=0;
    while(t>0)
    {
        int y=t%10;
        p=p*10+y;
        t=t/10;
    }
    cout<<n<<"   "<<p<<endl;
    return p;
}
bool bin(int n)
{
    int t=n;
    int p=0;
    while(n>0)
    {
        p=p*10+(n%2);
        n=n/2;
    } int c = pal(p);
    cout<<p<<"   "<<c<<endl;
}

bool ip(int number, int b){
    int reversed = 0;
    int k = number;

    while (k > 0) {
        reversed = b * reversed + k % b;
        k /= b;
    }
    return number == reversed;
}

int main()
{
  int i=pal(585);
  bin(585);
}
