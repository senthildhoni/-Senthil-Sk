#include <stdio.h>

void main()
{
    int a,i,fact=1;
    scanf("%d",&a);
    for (i=a;i>=1;i--)
    {
        fact=fact*i;
    }
    printf ("%d",fact);
    }
