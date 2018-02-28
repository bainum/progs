/*      gcd.c
*/

#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define SIZE 100
#define SIZEPL 101


int main(int argc, char **argv)
{
int a,b,remainder=0;
a = atoi(argv[1]);
b = atoi(argv[2]);


do  {

   if ( b != 0 )
     remainder = a%b;
   else {
     printf("\n second argument = %d and that is not a valid argument\n\n", b);
     return 0;
     }
   a = b;
   b = remainder;
#if DEBUG
   printf("a = %d, b = %d remainder = %d\n", a,b,remainder);
#endif
   } while ( remainder > 0 );  
printf("the gcd is %d\n",a); 
return 0;

}

/*

*/
