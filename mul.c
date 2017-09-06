#include <stdio.h>
int main()
{
    int n,i,r;
    scanf("%d",&n);
    scanf("%d", &r);
    for(i=1;i<=r;++i)
    {
        printf("%d * %d = %d \n", n, i, n*i);
    }

    return 0;
}
