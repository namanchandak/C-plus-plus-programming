#include<iostream>
class A {
        public:
A()
{
    std::cout<<"hello a\n";
}
};
class B: public A 
{
public :
B()
{
    std::cout<<"hello B\n";
}
};
int main ()
{
 A a1;
 B b1;
 
 return 0;
}
