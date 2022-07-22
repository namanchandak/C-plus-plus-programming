#include <iostream>
using namespace std;
class test {
    public:
int n,i,*p;
test(int size){
    n=size;
    p=new int[n];
}
int getdata(){
    for (        i = 0; i < n; i++)
    {
        cout<<"enter value at  "<<i+1<<"    \n";
        cin>>p[i];
        /* code */
         }
    return 0;
}
int showdata(){
    for(i=0;i<n;i++)
    {
cout<<"value at "<<i+1<< "is "<<p[i]<<endl;
    }
    return 0;
}
~test(){
    delete p;
}

};
int main(){
int n;
cout<<"enter the size"<<endl;
cin>>n;
test o(n);
o.getdata();
o.showdata();
return 0;
}