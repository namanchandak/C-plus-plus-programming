#include<iostream>
class A {
public:
 int show1()
{
    std::cout<<"hello a\n";
}
};
class B: public A
{
public :
int show2()
{
    std::cout<<"hello B\n";
}
};
class C: public B
{
public :
int show3()
{
    std::cout<<"hello c\n";
}

};
int main ()
{
 A a1;
 B b1;
 C c1;
 a1.show1();
 b1.show2();
 b1.show1();
 c1.show2();
 c1.show1();
 c1.show3();
 return 0;
 }/*
 hello a
hello B
hello a
hello B
hello a
hello c
 */
