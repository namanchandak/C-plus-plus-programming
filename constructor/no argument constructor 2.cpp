#include <iostream>

using namespace std;

class Test{
    public:
        int a,b,c;
    Test (){
        a=0;b=0;c=0;
    std::cout<<"hello VOLT \n";
    }
    void show(){
    cout<<a<<"\t"<<b<<"\t"<<c<<endl;
    }
};
int main() {
    Test volt1;
    Test volt2;
    volt1.show();
    volt2.show();

    return 0;
}
/*
hello VOLT
hello VOLT
0       0       0
0       0       0
*/

