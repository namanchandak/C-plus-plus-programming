#include <iostream>

using namespace std;
class test{
public:
int a,b,c;
};

int main()
{
    test t1;
    test t2;
    t1.a=10;
    t1.b=20;
    t1.c=30;
    t2.a=100;
    t2.b=200;
    t2.c=300;
    cout <<t1.a<<"\t"<<t1.b<<"\t"<<t1.c<<endl;
    cout <<t2.a<<"\t"<<t2.b<<"\t"<<t2.c<<endl;
    return 0;
}
/*
10      20      30
100     200     300
*/
