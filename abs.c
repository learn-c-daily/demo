/* Problem Statement: Write a program to calculate abs of a number
 *
 * step 1: check hello world program 
 * step 2: try printing a number 
 * step 3: print a negative number
 * step 4: check if the number is negative, multiple by -1
 * step 5: input number from user
 * step 6: write a function to calculate abs
 */

#include <stdio.h>

int abs(int n)
{
   if(n < 0)
      n = n * -1;
   return n;
}

int main()
{
   //int n = -10;
   int n;

   printf("enter any number\n");
   scanf("%d", &n);
   
   //printf("Hello World\n");
   printf("%d\n", n);

   //if(n < 0)
   //   n = n * -1;
   n = abs(n);
   printf("%d\n", n);

   return 0;
}
