#include<stdio.h>
int main()
{
int a[10],*p,i,sum=0;
p=&a[0];
for(i=0;i<10;i++)
{
printf("hello enter value at %d     ",i+1);
scanf("%d",p);
p++;
}

for(i=0;i<10;i++)
{ p--;
    printf("%d \n ",*p);
    sum=sum+*p;
}
 printf("%d \n ",sum);
return 0;
}