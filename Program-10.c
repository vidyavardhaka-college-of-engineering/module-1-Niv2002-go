//INPUT: 12
//OUTPUT: Square root of 12.00 = 3.46
#include <stdio.h>
#include <math.h>

int main() {
   double number, sqrtRoot;

   printf("Enter a number: ");
   scanf("%lf", &number);

   // computing the square root
   sqrtRoot = sqrt(number);

   printf("Square root of %.2lf =  %.2lf", number, sqrtRoot);

   return 0;
}