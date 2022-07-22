#include<iostream>
class A {
public:
virtual int show()
{
    std::cout<<"hello a\n";
}
};
class B: public A
{
public :
int show()
{
    std::cout<<"hello B\n";
}

};
class C: public A
{
    public :

int show()
{
    std::cout<<"hello c\n";
}

};
int main ()
{
 B b1;
 C c1;
 A &a1=b1;
 A &a2=c1;
 a1.show();
 b1.show();
 a2.show();
 c1.show();
 return 0;
 }/*
 hello B
hello B
hello c
hello c
 */
