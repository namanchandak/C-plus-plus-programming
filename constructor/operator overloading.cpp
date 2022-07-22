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
    int operator - (){
    a=(-1)*a;b=(-1)*b;c=(-1)*c;
    }
};
int main() {
    Test volt1(10,20,30);
    Test volt2(100,200,300);
    volt1.show();
    volt2.show();
   -volt1;
   -volt2;
   volt1.show();
    volt2.show();
    return 0;
}
/*
hello VOLT
hello VOLT
10      20      30
100     200     300
-10     -20     -30
-100    -200    -300

*/

