#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>


int main(void)
{
    string text = get_string("Text: ");

    float le = 0;
    float wo = 1;
    float se = 0;
    float n = strlen(text);

    for (int i = 0; i < n; i++)
    {
        if (isalpha(text[i]) != 0)
        {
            le++;
        }

        if (text[i] == ' ')
        {
            wo++;
        }

        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            se++;
        }
    }

    float L = 100 * (le / wo);

    float S = 100 * (se / wo);

    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }

    return 0;
}
