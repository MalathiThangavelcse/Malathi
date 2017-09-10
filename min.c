#include<stdio.h>
int main()
{
int a[50],n,max,min,sum=0,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=min=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
max=a[i];
if(a[i]<min)
min=a[i];
}
sum=max+min;
printf("\n Sum of maximum and minimum number of an array:%d",sum);
return 0;
}
