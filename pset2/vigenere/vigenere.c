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
    // n is the length of the keyword
    int n = strlen(argv[1]);

    // Check that the keyword is all letters
    for (int i = 0; i < n; i++)
    {
        if (isalpha(argv[1][i]) == 0)
        {
            printf("not a word\n");
            return 1;
        }
    }

    // convert the keyword to all lower case letters
    for (int i = 0; i < n; i++)
    {
        argv[1][i] = tolower(argv[1][i]);
    }

    // promt user for an input to encode and call it 'message'
    printf("plaintext:");
    string message = get_string();

    printf("ciphertext:");

    int j = 0;
    // for loop to encode each letter in the message
    for (int i = 0, m = strlen(message); i < m; i++)
    {
        // j will be used to loop around the keyword.  n is the legth of the keyword.
        j = j % n;

        // check if the ith element of the message is a character
        if (isalpha(message[i]))
        {

            // 2 cases, message[i] is upper case and message[i] is lower case
            if (isupper(message[i]))
            {
                printf("%c", (((message[i] - 65) + (argv[1][j] - 97)) % 26) + 65);
            }
            else if (islower(message[i]))
            {
                printf("%c", (((message[i] - 97) + (argv[1][j] - 97)) % 26) + 97);
            }
            j++ ;
        }
        else
        {
            printf("%c", message[i]);
        }
    }
    printf("\n");
}
