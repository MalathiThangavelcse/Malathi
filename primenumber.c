#include<stdio.h>
int main()
{
int i,flag,h,l;
scanf("%d %d",&h,&l);
while(l<h)
{
flag=0;
for(i=2;i<l/2;i++)
{
if(l%i==0)
{
flag=1;
break;
}
}
if(fag==0)
printf("%d",l);
++l;
}
return 0;
}
