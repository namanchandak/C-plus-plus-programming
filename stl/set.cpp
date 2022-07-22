#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string>s;
    s.insert("abc");
    s.insert("cdf");
    s.insert("bcd");

    auto it=s.find("abc");
    //cout<<*it;
    s.erase("abc");
    for(string value:s)
    {
        cout<<value<<endl;
    }
    cout<<endl;
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<(*it)<<endl;
    }


}
