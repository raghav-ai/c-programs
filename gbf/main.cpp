#include <iostream>
#include<vector>
using namespace std;
int solve(vector<int>v,int pos,int sum)
{
    if(sum==0)
        return solve(v,0,1)+solve(v,1,2)+solve(v,2,5)+solve(v,3,10)+solve(v,4,20)+solve(v,5,100);
    else if(sum+v[pos]<200)
       {
           int a=sum+v[pos];
        return solve(v,0,a)+solve(v,1,a)+solve(v,2,a)+solve(v,3,a)+solve(v,4,a);
       }
    else if(sum+v[pos]==200)
        return 1;
    else return 0;
}
int main()
{
    vector<int>v{1,2,5,10,20,100};
    int k=solve(v,0,0);
    cout<<k;
    return 0;
}
