#include<stdio.h>
int main()
{
int a[10],*p,i;
p=&a[0];
for(i=0;i<10;i++)
{
printf("hello enter value at %d     ",i);
scanf("%d",p);
p++;
}
p=a[0];
for(i=0;i<10;i++)
{ 
    printf("%d  ",*p);
    p++;
}

}