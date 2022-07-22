#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,string>m;
    m[1]="abc";
    m[6]="gcl";
    m[3]="ddf";
    m.insert({4,"hkl"});
    //m.erase(3);
    //map<int,string>::iterator it;
    auto it=m.find(6);
    m.erase(it);
    //for(it=m.begin();it!=m.end();it++ )
    //{
    //    cout<<(*it).first<<"\t"<<(*it).second<<endl;
    // }
    for(auto &pr:m)
    {
        cout<<pr.first<<"\t"<<pr.second<<endl;
    }
   // auto it=m.find(7);

    /*if(it==m.end())
    {
        cout<<"nope";
    }
    else
    {
        cout<<(*it).first<<" "<<(*it).second;
    }*/


    return 0;
}
