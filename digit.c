#include <stdio.h>
void main()
{
     int n;
    int count = 0;

    printf("Enter an word: ");
    scanf("%d", &n);

    while(n!= 0)
    {
        
        n /= 10;
        ++count;
    }

    printf("Number of digits: %d", count);
}
