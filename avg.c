#include<stdio.h>
int main()
{
int a[50],n,i,s=0;
float avg;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
s=s+a[i];
}
avg=s/n;
printf("Average is:%f",avg);
return 0;
}
