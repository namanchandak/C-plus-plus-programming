#include<iostream>
class A {
public:
 int show()
{
    std::cout<<"hello a\n";
}
};
class B
{
public :
int show()
{
    std::cout<<"hello B\n";
}
};
class C: public B,public A
{
public :
int Volt()
{
    std::cout<<"hello c\n";
}

};
int main ()
{
 
 C c1; 
 c1.A::show();
 c1.B::show();
 c1.Volt();
 return 0;
 }/*
hello a
hello B
hello c

 */
