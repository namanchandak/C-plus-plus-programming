#include<stdio.h>
int main()
{
int a=10,*p,*q;
p=&a;
q=&p;
printf("hello %d  %d  %d  %d  %d  %d",a,&a,p,*p,q,*q);
}