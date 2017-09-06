#include <stdio.h>
int main()
{
    int b, e;
    long long r = 1;
    scanf("%d", &b);
    scanf("%d", &e);
    while (e!= 0)
    {
        r*= b;
        --e;
    }
    printf("Answer = %lld", r);
    return 0;
}
