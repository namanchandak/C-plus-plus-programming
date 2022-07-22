#include <iostream>
class A {
public:
void display ()
{ std::cout << "Hello world! A \n" ;
}
};
class B : public A
 {
     public:
void show ()
{ std::cout << "Hello world! B\n" ;
}
};


int main() {
   
    std::cout << "Hello world!";
A a;
B b;
b.display();
b.show();
a.display();

    return 0;
}
/*
Hello world!Hello world! A 
Hello world! B
Hello world! A 
*/