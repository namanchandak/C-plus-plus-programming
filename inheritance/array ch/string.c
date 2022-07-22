#include<stdio.h>
#include<string.h>
int main()
{int i;char a[10];
gets (a);
for (i = strlen(a)-1; i >=0; i--)
{
    /* code */
    printf("%c",a[i]);
}

return 0;

}