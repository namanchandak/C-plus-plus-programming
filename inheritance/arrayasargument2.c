#include<stdio.h>
int add(int a[],int size);
int main()
{int a[]={10,20,30,60,100,1234},sum;
sum=add(a,6);
printf("%d",sum);
return 0;

}
int add(int a[],int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
        sum=sum+a[i];
       
    }
    return sum;
}