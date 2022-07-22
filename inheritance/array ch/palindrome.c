#include<stdio.h>
#include<string.h>
int main()
{int i,j=0,f=0;char a[10];
gets (a);
for (i=strlen(a)-1;i>=j;i--,j++)
{
    if(a[i]!=a[j]){
        f=1;
        break;
    }
    /* code */

}
puts(a);
if(f==1)
{
    printf("not");
}
else
printf("pali");
return 0;

}