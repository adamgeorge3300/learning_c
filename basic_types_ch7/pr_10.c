/* Write a program that counts the number of vowels (a, e, i, o and u) in a sentence:

Enter a sentence: And that's the way it is.
Your sentence contains 6 vowels. */

#include <stdio.h>
#include <ctype.h>

int main(void) {

    char c;
    int vowels = 0;
    
    printf("Enter a sentence: ");

    while ((c = getchar()) != '\n') {
        switch (toupper(c)) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                vowels++;
                break;
            default:
                break;
        }
    }
    printf("Your sentence contains %d vowels.\n", vowels);
    return 0;
}
