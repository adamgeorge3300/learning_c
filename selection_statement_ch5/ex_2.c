

//The following program fragments illustrate the logical operators. Show the output produced by each, assuming that i, j, and k are int variables.






#include <stdio.h>

int main () {

  int i , j , k;

    i = 10; j = 5;
    printf("%d\n", !i < j);

    i = 2; j = 1;
    printf("%d\n", !!i + !j);

    i = 5; j = 0; k = -5;
    printf("%d\n", i && j || k);

    i = 1; j = 2; k = 3;
    printf("%d\n", i < j || k);
    return 0;

}
