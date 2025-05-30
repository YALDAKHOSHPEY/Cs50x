#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int bricks);

int main(void)
{
    int H;

    do
    {
        H = get_int("Enter the height (1-8): ");
    }
    while (H < 1 || H > 8);

    for (int i = 0; i < H; i++)
    {
        print_row(H - (i + 1), i + 1);
    }
}

void print_row(int spaces, int bricks)
{
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }

    // Print bricks
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }

    printf("\n");
}
