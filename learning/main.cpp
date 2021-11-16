#include <iostream>
#include <cmath>
 using namespace std;
int solve(unsigned long int n)
{
    int c=1;
    while(n!=1)
    {
        c++;
        if(n%2==0)
            n=n/2;
        else
            n=3*n+1;
    }
    return c;
}
int main()
{
    unsigned long int q=0;int c=1;
  unsigned long int n=1;

  while(n<1000000)
  {
      unsigned long int p=n;

      int k=solve(p);
      if(c<k)
        {c=k;q=n;}

      n++;
  }
  cout<<c<<" "<<q;
  return 0;
}
