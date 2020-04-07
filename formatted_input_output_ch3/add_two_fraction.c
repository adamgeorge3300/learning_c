#include <stdio.h>

/* add up two fractions; input is taken from the user
   print the result in a fractional and decimal form
 */

int main () {
    /* num - numerator
       den - denominator */

    int num_1, num_2, den_1, den_2, num_result, den_result, decimal_result;

    printf("give the first fraction: ");
    scanf("%d%d", &num_1, &den_1);

    printf("give the second fraction: ");
    scanf("%d%d", &num_2, &den_2);

    den_result = den_1 * den_2;
    num_result = num_1 * den_2 + num_2 * den_1;

    decimal_result = num_result / den_result;

    printf("the sum of two fractions is %d/%d\n", num_result, den_result);
    printf("the sum of two fractions is %d in a decimal form because the integer division rounds down to zero\n", decimal_result); 

    return 0;
}


