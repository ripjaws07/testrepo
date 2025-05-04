#include <cs50.h>
#include <stdio.h>

void make_pyramid(int height);
// a prgram to make pyramids like in mario
int main(void)
{
    int height;
    do
    {
        height = get_int("Enter the height to make the pyramid: ");
    }
    while (height < 1 || height > 8); // takes the desired input
    make_pyramid(height); // hands it back to the function
    return 0;             // if it works out correctly then returns zero
}

void make_pyramid(int height)
{
    for (int row = 0; row < height; row++) // Creates the rows
    {
        for (int space = 0; space < height - row - 1; space++)
        {
            printf(" "); // prints the spaces before the pyramid
        }
        for (int column = 0; column <= row; column++)
        {
            printf("#"); // prints the first half of the pyramid
        }
        printf("  ");
        for (int column = 0; column <= row; column++)
        {
            printf("#"); // prints the second half
        }
        printf("\n"); // proceeds to a new line and prints more if any
    }
}
