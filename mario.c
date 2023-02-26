#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get input to represent height
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    // Print how many height (i unit)

    for (int i = 0; i < n; i++)
    {
        // Print width

        for (int j = 0; j < n + i + 3; j++)
        {
            if (j == n || j == n + 1 || i + j < n - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }

}