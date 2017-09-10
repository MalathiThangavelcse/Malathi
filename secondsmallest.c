#include<stdio.h>
int main()
{
    int s,sm;
    int a[100],size,i;
    scanf("%d",&size);
    for (i = 0 ; i < size; i++)
        scanf("%d", &a[i]);
    if (a[0]<a[1]) {
        s= a[0];
        sm = a[1];
    }
    else {
      s = a[1];
      sm = a[0];
    }
    for (i = 2; i < size; i++) {
        if (a[i] < s) {
        sm = s;
        s = a[i];
        }
        else if (a[i] < sm) {
            sm = a[i];
        }
    }
    printf(" \nSecond smallest element is %d", sm);
    return 0;
}
