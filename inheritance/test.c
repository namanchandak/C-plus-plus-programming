#include<stdio.h>

int main (
    char a[10];
    for(i=0;i<9;i++)
    {
      a[i]=getche();
      if (a[i]==13||a[i]== 10 )
      break;
    }

    for(i=0;a[i]!=/0;i++)
    {
        printf("%c",a[i]);
    }
)

