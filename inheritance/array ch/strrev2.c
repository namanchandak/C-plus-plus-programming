#include<stdio.h>
#include<string.h>
int main()
{int i,j=0;char a[10],b[10];
gets (a);
for (i =strlen(a)-1; i>0; i--,j++)
{
    /* code */
b[j]=a[i];
}
puts(a);
b[j]='\0';
puts(b);
return 0;

}