#include<iostream>
class A {
public:
 int show1()
{
    std::cout<<"hello a\n";
}
};
class B :virtual public A
{
public :
int show2()
{
    std::cout<<"hello B\n";
}
};
class C: virtual public A
{
public :
int show3()
{
    std::cout<<"hello c\n";
}

};
class D :public B,public C
{
public:
int show4()
{
    std::<<"hello D";
}
};
int main ()
{
 
 D d1; 
 d1.show2();
 d1.show1();
 d1.show3();
 return 0;
 }
 
 /*
 hello B
hello a
hello c

 */
