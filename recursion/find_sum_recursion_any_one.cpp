#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool summ(int i,vector<int>&v,int s,int sm,int a[],int n)
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
            return true;
        }
        return false;
    }
    
    v.push_back(a[i]);
    s=s+a[i];

    if(summ(i+1,v,s,sm,a,n)==true)
    return true;
    v.pop_back();
    s=s-a[i];
    if(summ(i+1,v,s,sm,a,n)==true)
    return true;
    
    return false;
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
