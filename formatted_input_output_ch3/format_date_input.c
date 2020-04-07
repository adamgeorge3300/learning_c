#include <stdio.h>

/* write a program that accepts a date from the user in the form
   mm/dd/yyyy and then displays it in the form yyyymmdd:
 */

int main () {

    int day, month, year;

    printf("Enter a date(mm/dd/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("You entered the date %d%d%d",year,month,day);

    return 0;
}


