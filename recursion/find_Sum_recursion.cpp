#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void summ(int i,vector<int>&v,int s,int sm,int a[],int n)
{
    if(i==n)
    {
        if(s==sm)
        {
            for(auto it:v )
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    v.push_back(a[i]);
    s=s+a[i];
    summ(i+1,v,s,sm,a,n);
    v.pop_back();
    s=s-a[i];
    summ(i+1,v,s,sm,a,n);
    
}
int main() {
    // int s=2;
    int a[]={1,2,1};
    int  n=3;
    int sum=2;
    vector<int>v;
    summ(0,v,0,sum,a,n);
    return 0;
}
