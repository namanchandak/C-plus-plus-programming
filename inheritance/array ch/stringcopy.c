#include<stdio.h>
#include<string.h>
int main()
{int i;char a[10],b[10];
gets (a);
for (i =0; i<=strlen(a); i++)
{
    /* code */
   b[i]=a[i];
}
puts(a);
puts(b);
return 0;

}