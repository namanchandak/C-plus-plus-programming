#include<iostream>
class A {
    public:
A()
{
    std::cout<<"\nhello a    ";
}
};
class B: public A 
{
public :
B()
{
    std::cout<<"\nhello B\n";
}
};
int main ()
{
 A a1;
 B b1;
 return 0;
}
/*
hello a    
hello a    
hello B
*/