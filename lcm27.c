#include<stdio.h>
int gcd(int a, int b)
{
if (a == b)
  return a;
if (a > b)
  return gcd(a-b, b);
return gcd(a, b-a);
}
int lcm(int a, int b)
{
    return (a*b)/gcd(a, b);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("LCM of %d and %d is %d ", a, b, lcm(a, b));
    return 0;
}
