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
    Test operator+ (Test &t)
    {   Test temp;
        temp.a=a +t.a;
        temp.b=b +t.b;
        temp.c=c +t.c;
        return (temp) ;
    }
};
int main() {

    Test volt1(10,20,30);
    Test volt2(100,200,300);

    Test t3;
    t3=volt1 + volt2;
    volt1.show();
    volt2.show();
    t3.show();
    return 0;
}
/*

*/

