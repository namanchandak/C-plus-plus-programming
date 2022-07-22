#include<stdio.h>
#include<string.h>
int main()
{
char a[10],*p,*q;
int i,f=0;
p=&a[0];
gets (a);
i=strlen(a)-1;
q=&a[i];
while(p<q)
{
    if(*p!=*q)
    {
        f=1;
        break;
    }
    p++;q--;
}
if (f==0)
printf("palindrome");
else
printf("non palindrome");
}