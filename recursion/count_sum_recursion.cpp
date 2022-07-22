#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int summ(int i,vector<int>&v,int s,int sm,int a[],int n)
{
    if(s>sm)
    return 0;
    if(i==n)
    {
        if(s==sm)
        {
            // for(auto it:v )
            // {
            //     cout<<it<<" ";
            // }
            cout<<endl;
            return 1;
        }
        return 0;
    }
    v.push_back(a[i]);
    s=s+a[i];
    int l=summ(i+1,v,s,sm,a,n);
    v.pop_back();
    s=s-a[i];
    int r=summ(i+1,v,s,sm,a,n);
    return r+l;
}
int main() {
    // int s=2;
    int a[]={1,2,1};
    int  n=3;
    int sum=2;
    vector<int>v;
    int p=summ(0,v,0,sum,a,n);
    cout<<p<<" times"<<endl;
    return 0;
}
