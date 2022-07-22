#include<stdio.h>
#include<string.h>
int main()
{int i;char a[10];
gets (a);
for (i=0;i<=strlen(a)-1;i++)
{
   if(a[i]>=97&&a[i]<=122) 
printf("%c",a[i]-32);
else
printf("%c",a[i]);
}


return 0;

}