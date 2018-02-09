#include <stdio.h>

int main()
{ int n,k,sum=0;
    int array[100];
    printf ("size of array");
    scanf ("%d",&n);
    printf ("enter the number u want add upto that number");
    scanf ("%d",&k);
    printf ("enter %d number to form array",n);
    for (int i=1;i<=n;i++)
    {
        scanf ("%d",&array[i]);
    }
    for (int j=1;j<=k;j++)
    {
        sum=sum+array[j];
        
    }
    printf ("sum of firsr %d number in urs array is %d",k,sum);
    return 0;
}
