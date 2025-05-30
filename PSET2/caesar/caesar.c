#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char rotate(char ci, int key);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    int key = atoi(argv[1]);
    printf("plaintext: ");
    string plain = get_string("plaintext: ");
    printf("ciphertext: ");

    for (int i = 0, n = strlen(plain); i < n; i++)
    {
        printf("%c", rotate(plain[i], key));
    }

    printf("\n");
    return 0;
}

char rotate(char ci, int key)
{
    if (isalpha(ci))
    {
        char base = isupper(ci) ? 'A' : 'a';
        return ((ci - base + key) % 26) + base;
    }
    return ci;
}
