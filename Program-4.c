4//INPUT: 25 4
//OUTPUT: Quotient = 6 Remainder = 1 
#include <stdio.h>
int main() {
    int dividend, divisor, quotient, remainder;
    printf("Enter dividend and Divisor\n");
    scanf("%d%d", &dividend,&divisor);  //correct the code
   
    // Computes quotient
    quotient = dividend/divisor;  //corect the code

    // Computes remainder
    remainder = dividend%divisor; // correct the code

    printf("Quotient = %d \n", quotient);  // correct the code
    printf("Remainder = %d \n", remainder);  // correct the code
    return 0;
}
