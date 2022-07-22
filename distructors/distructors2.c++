#include<iostream>
using namespace std;
class test{
public:
test(){
    cout<<"hello";
}
~test(){
    cout<<"bye";
}
};
int show(){
    test a;
    test b;
    return 0;
}
int main()
{
show();


}