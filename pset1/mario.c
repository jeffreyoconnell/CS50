#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // height will be the number of rows in the pyramid
    int height;
    do
    {
        printf("Height:");
        height=get_int();
    }
    // while loop makes sure that the height is a valid integer between 0 and 24
    while (height<0 || height>=24);

    for (int i = 0; i<height; i++)
    {
        // prints the spaces before the pyramid
        for (int j=0; j<(height-i-1); j++)
        {
          printf(" ");
        }
        //prints the left side of the pyramid
        for (int j=(height-i-1); j<height; j++)
        {
            printf("#");
        }
        // print the gap
        printf("  ");
        // print the right side of the pyramid
        for (int j=(height-i-1); j<height; j++)
        {
            printf("#");
        }
       printf("\n");
    }
}
