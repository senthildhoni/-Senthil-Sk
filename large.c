#include <stdio.h>

void main()
{
int a,b,c; 
printf("enter the values of a b c");
scanf("%d%d%d",&a,&b,&c);
if(a>=b && a>=c)
{
 printf("largest number a is %d\n",a);
}
if(b>=a && b>=c)
{
printf ("largest number  is  b%d\n",b);
 }
if(c>=a && c>=b)
  {
 printf("largest number c is %d\n",c);
  }

    
}

