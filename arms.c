#include <stdio.h>
#include <math.h>
int main()
{
 int l,h,i,t1,t2,r,n = 0, result = 0;
 scanf("%d %d",&l,&h);
 for(i = l+ 1; i<h; ++i)
    {
        t2 = i;
        t1 = i;
        while (t1 != 0)
        {
            t1 /= 10;
            ++n;
        }
        while (t2 != 0)
        {
            r= t2 % 10;
            result += pow(r, n);
            temp2 /= 10;
        }
        if (result == i) {
            printf("%d ", i);
        }
        n = 0;
        result = 0;
        }
    return 0;
}
