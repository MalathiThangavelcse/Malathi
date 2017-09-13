#include<stdio.h>
int main()
{
int a=0,b=1,n,i,c;
scanf("%d",&n);
printf("\n Fibonacci series:%d %d",a,b);
for(i=2;i<n;i++)
{
c=a+b;
a=b;
b=c;
printf("%d",c);
}
return 0;
}
