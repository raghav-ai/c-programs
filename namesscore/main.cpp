#include <iostream>
#include<string>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;
int solve(int current,int i,vector<int>v)
{
    if(current==0)
    return solve(0,0,v)+solve(0,1,v)+solve(0,2,v)+solve(0,3,v)+solve(0,4,v)+solve(0,5,v);
    else if(current +v[i]<200)
       {
           int a=current +v[i];
        return solve(a,0,v)+solve(a,1,v)+solve(a,2,v)+solve(a,3,v)+solve(a,4,v)+solve(a,5,v);}
    else if (current+v[i]==200)
        return 1;
    else return 0;
}
int main()
{
   vector<int> v={1,2,5,10,20,100};
   int k=solve(0,0,v);
   cout<<k;
   return 0;
}

