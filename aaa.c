#include<stdio.h>
int main()
{
int a=0,b=1,n,i,c;
scanf("%d",&n);
for(i=2;i<n;i++)
{
c=a+b;
a=b;
b=c;
printf("%d",c);
}
return 0;
}
