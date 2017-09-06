#include<stdio.h>
int main()
{
int n,i,r,rev=0;
scanf("%d",&n);
i=n;
while(i!=0)
{
r=i%10;
rev=rev*10+r;
i=i/10;
}
if(rev==n)
{
printf("Palindrome");
}
else
{
printf("Not a palindrome");
}
return 0;
}
