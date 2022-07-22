#include <iostream>

using namespace std;

inline int method() // without inline function ,also this can work//
{
    cout<<"hello from Team VOLT "<<endl<<"by  method"<<endl;
}
int main()
{
    std::cout<<"hi there    "<<endl;
    method();
    cout<<"we are having fun in computer coding"<<endl;
    method();
    cout<<"hope you enjoy";
    method();
}
/*
hi there
hello from Team VOLT
by  method
we are having fun in computer coding
hello from Team VOLT
by  method
hope you enjoy hello from Team VOLT
by  method

*/
