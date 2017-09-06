#include<stdio.h>
int main()
{
int i,r,m,n,a=0;
scanf("%d",&m);
n=m;
while(n!=0)
{
r=n%10;
a=a+(r*r*r);
n=n/10;
}
if(m==n)
{
printf("Armstrong number");
}
else
{
printf("Not a armstrong");
}
return 0;
}
