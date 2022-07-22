#include<iostream>
class A {
        public:
A(int x,int y)
{
    std::cout<<"hello a\n"<<x<<"   "<<y;
}
};
class B: public A 
{
public :
B(int b,int c,int c):A(a,b)
{
    std::cout<<"hello B\n"<<a<<"    "<<b;
}
};
int main ()
{
 A a1(10,20);
 B b1(100,300,500);
 
 return 0;
}
