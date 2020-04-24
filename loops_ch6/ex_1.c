

//What output does the following program fragment produce?

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    i = 1;
    while (i <= 128) {
    printf("%d ", i);
    i *= 2;
}
}
