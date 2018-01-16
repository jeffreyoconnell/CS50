#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{

    // check to see if there are 2 imputs
    if (argc != 2)
    {
        printf("Not the correct number of inputs \n");
        return 1;
    }

    // convert the second input to an integer and call it i
    int i = atoi(argv[1]);

    // promt user for an imput to encode
    printf("plaintext:");
    string message = get_string();

    printf("ciphertext:");

    // right not this just adds i to each element.  I need to fix what happens after z
    // and make everything upper case
    for ( int j = 0, n = strlen(message); j < n; j++)
    {

        // 3 cases: upper case, lower case, and not a letter
        if isupper(message[j])
        {
            // Take the upper case letter and shift it I places,
            // then need to subtract A = 65 in case it was above Z = 90 and mod 26.
            // then need to add back the 65 to put it in the correct place.
            printf("%c", (((message[j] + i) - 65) % 26) + 65);
        }
        else if islower(message[j])
        {
            // similar to upper case but need to use a = 97
            printf("%c", (((message[j] + i) - 97) % 26) + 97);
        }
        else
        {
            // if it is neither upper or lower case, print the charachter as is.
            printf("%c", message[j]);
        }
    }
    printf("\n");
}
