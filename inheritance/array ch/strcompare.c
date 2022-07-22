#include<stdio.h>
#include<string.h>
int main()
{int i,f=0;char a[10],b[10];
gets (a);
gets(b);
if(strlen(a)!=strlen(b))
f=1;
else{
for (i=0;i<strlen(a);i++)
{
    /* code */

 if(b[i]!=a[i])
{f=1;
break;}
}
}
puts(a);
b[i]='\0';
puts(b);
if(f==1)
{printf("not");
}
else
printf("right");
return 0;

}