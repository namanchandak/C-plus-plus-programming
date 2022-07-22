#include<stdio.h>

int main()
{int i;char a[10];
for(i=0;i<10;i++)
{
    a[i]=getchar();
    if(a[i]==13||10)
    {
        break;
    }
}
i=0;
while (a[i]!=\0)
{
    /* code */
    printf("%c",a[i]);
    i++;
}

return 0;

}