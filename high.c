#include<stdio.h>
int main()
{
int a[50],n,high,i,low;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
high=low=a[0];
 for(i=1;i<n;++i)
    {
        if(a[i]>high)
            high=a[i];
        if(a[i]<low)
            low=a[i];
    }
printf("\nHightest:%d Lowest:%d",high,low);
return 0;
}
