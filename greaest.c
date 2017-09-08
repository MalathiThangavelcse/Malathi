#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a>b&&a>c)
{
printf("a=%dis greater",a);
}
elseif(b>c)
{
printf("b=%d is greater",b);
}
else
{
printf("c=%d is greater",c);
}
return 0;
}
