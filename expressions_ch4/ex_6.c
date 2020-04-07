/*
European countries use a 13-digit code, known as a European Article Number (EAN) instead of the 12-digit Universal Product Code (UPC) found in North America. Each EAN ends with a check digit, just as UPC does. The technique for calculating the check digit is also similar:

Add the second, fourth, sixth, eighth, tenth and twelfth digits.
Add the first, third, fifth, seventh, ninth, and eleventh digits.
Multiply the first sum by 3 and add it to the second sum.
Subtract 1 from the total.
Compute the remainder when the adjusted total is divided by 10.
Subtract the remainder from 9.

*/

#include <stdio.h>

int main() {

    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, sum1, sum2, total;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
          &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);

    sum1 = n2 + n4 + n6 + n8 + n10 + n12;
    sum2 = n1 + n3 + n5 + n7 + n9 + n11;
    total = 3 * sum1 + sum2;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}


