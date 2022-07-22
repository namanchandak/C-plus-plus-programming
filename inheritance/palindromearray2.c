#include<stdio.h>
#include<string.h>
int main()
{
char a[]="sonu",*p;
int i;
p=&a[0];
for(i=1;i<=6;i++)
{
--*p;
}
puts(a);
}