#include <stdlib.h>
void
main ()
{
  int a, b, c = 1, i;
  printf ("enter the number \t");
  scanf ("%d", &a);
  printf ("enter the power  \t");
  scanf ("%d", &b);
  for (i = 1; i <= b; i++)
    {
      c = c * a;
    }
  printf ("%d", c);
}
