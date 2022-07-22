#include<stdio.h>
#include<string.h>
int main()
{
char a[10],p;
p=a[10];
printf("enter a string");
gets (a);
while(p!=0)
{
    puts(a);
    p++;
}
    return 0;
}