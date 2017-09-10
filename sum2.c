#include<stdio.h>
int main()
{
int a,b,sum=0,*p1,*p2;
scanf("%d %d",&a,&b);
p1=&a;
p2=&b;
sum=*p1+*p2;
printf("\n addition is:%d",sum);
return 0;
}
