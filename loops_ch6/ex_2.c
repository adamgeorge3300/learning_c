//What output does the following program fragment produce?

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    i = 9384;
    do {
    	printf("%d ", i);
    	i /= 10;
} while (i > 0);
}
