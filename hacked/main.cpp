#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int n;
int h;

int main() {

  cin>>n>>h;
 int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
    int v=0;int pos=0;int o=0;
    while(cin>>v)
    {
        if(v==0) break;
        else if (v==1&&pos!=0)
            pos=pos-1;
        else if (v==2 &&pos!=(n-1))
            pos=pos+1;
        else if(v==3&&o==0&&arr[pos]>0)
        {
            arr[pos]=arr[pos]-1;o=1;
        }
        else if(v==4&&o==1&&arr[pos]<h)
        {
            arr[pos]=arr[pos]+1;o=0;
        }
        else continue;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}

