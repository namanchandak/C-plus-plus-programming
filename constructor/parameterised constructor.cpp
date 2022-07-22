#include <iostream>

using namespace std;

class Test{
    public:
        int a,b,c;
    Test (int x,int y,int z){
        a=x;b=y,c=z;
    std::cout<<"hello VOLT \n";
    }
    void show(){
    cout<<a<<"\t"<<b<<"\t"<<c<<endl;
    }
    test(Test &t){
    a=t.a;b=t.b;c=t.c;
    }
};
int main() {
    Test volt1(10,20,30);
    Test volt2(volt1);
    volt1.show();
    volt2.show();
    Test t3(volt2);
    t3.show();
    return 0;
}
/*
hello VOLT
hello VOLT
10      20      30
2       3       4

*/

