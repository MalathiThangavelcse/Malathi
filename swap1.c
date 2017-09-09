#include<stdio.h>
int main()
{
int a,b;
scanf("%d %d",&a,&b);
printf("Before swapping:%d %d\n",a,b);
swap(&a,&b);
printf("After swapping:%d %d",a,b);
return 0;
}
void swap(int *x, int *y)
{
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}
