#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int add(int times, string character);
    int desenho(int distance, int write);
    int height;

    do
    {
        height = get_int("Height: ");
    }
    while (height < 1);

    int espace = height;

    for (int b = 0; b < height; b++)
    {
        espace = espace - 1;
        desenho(espace, b);
    }

    return 0;
}
//The End-----------------------------------------------------------------------------------

    int add (int times, string character)
    {
        for (int a = 0; a < times; a++)
        {
            printf("%s", character);
        }

        return 0;
    }

    int desenho (int distance, int write)
    {
        add(distance, " ");
        add(write + 1, "#");
        add(2, " ");
        add(write + 1, "#");
        printf("\n");

        return 0;
    }