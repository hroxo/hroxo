#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char rot13(char c)
{
    c = tolower(c);
    if (c >= 'a' && c <= 'z')
    {
        return (((c - 'a' + 13)% 26) + 'a');
    }
    else
    {
        return c;
    }
}


int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Error 1\nPlease input your message.\n");
        return 1;
    }
    else
    {
        printf("Your message is: ");
        for (int i = 1; i < argc; i++) // Começa em 1 para pular o nome do programa
        {
            for (int j = 0; j < strlen(argv[i]); j++)
            {
                printf("%c", rot13(argv[i][j]));
            }
        }

        printf("\n");
        return 0;
    }
}
