#include<iostream>
#include<conio.h>
class A {
public:
void show()
{
    std::cout<<"hello a\n";
}
};
class B: public A
{
    public :
void show()
{
    std::cout<<"hello B";
}

};
void main ()
{ 
    A a1;
    B b1;
 a1.show();
 b1.show();
 getch() ;
 }
