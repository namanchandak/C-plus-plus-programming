#include<iostream>

class A {
public:
int show()
{
    std::cout<<"hello a\n";
}
};
class B: public A
{
    public :

int display()
{
    std::cout<<"hello B";
}

};
int main ()
{

 B b1();
 A &a1=b1;
 
 b1.show();
 b1.display();
 return 0;

}