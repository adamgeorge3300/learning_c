#include <stdio.h>

/*

Write calls of printf that display a float variable x in the following formats.

- Exponential notation; left-justified in a field of size 8: one digit after the decimal point.
- Exponential notation: right-justified in a field of size 10; six digits after the decimal point.
- Fixed decimal notation; left-justified in a field of size 8; three digits after the decimal point.
- Fixed decimal notation; right-justified in a field of size 6; no digits after the decimal point.

 */

int main () {

   float num1;

   printf("Enter a floating-point number (6digits): ");
   scanf("%f", &num1);

   printf("%8.1e\n", num1);
   printf("%-10.6e\n", num1);
   printf("%8.3f\n", num1);
   printf("%-6.0f\n", num1);


   return 0;
}


