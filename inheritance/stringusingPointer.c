#include<stdio.h>
#include<string.h>
int main()
{
char a[10],p;
p=a;
gets(a);
while (*p!=\0)
{
    printf("%c",*p);
    p++;
}
    return 0;
}