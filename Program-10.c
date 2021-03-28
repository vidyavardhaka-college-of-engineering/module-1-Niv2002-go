//INPUT: 12
//OUTPUT: Square root of 12.00 = 3.46
#include <stdio.h>
#include <math.h>

int main() {
   float num, Root;

   printf("Enter a number: ");
   scanf("%f", &num);

   // computing the square root
   Root = sqrt(num);

   printf("Square root of %.2f =  %.2f", num, Root);

   return 0;
}