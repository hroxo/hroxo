#include <stdio.h>
#include <ctype.h>
#include <string.h>

int password_check (char password[20]);

int main ()
{
    char password[20];
    printf ("Input your password:\n");
    scanf ("%s", password);
    if (password_check(password) == 0)
    {
        printf ("Password is secure!\n");
    }
}

int password_check (char password[20])
{
    int n = strlen(password);
    if (n < 9)
    {
        printf("Password too short please use 8 character for a secure password\n");
        return 1;
    }
    else
    {
        int lower = 0;
        int upper = 0;
        int num = 0;
        int digit = 0;
        for(int i = 0; i < n; i++)
        {
            if(isdigit(password[i]))
            {
                num = 1;
            }
            else if (islower(password[i]))
            {
                lower = 1;
            }
            else if (isupper(password[i]))
            {
                upper = 1;
            }
            else if ((int) password [i] < 48 && (int) password [i] > 32) //podia ter dito '!isalnum(password[i])'
            {
                digit = 1;
            }
        }
        int score = lower + upper + num + digit;
        if (score < 4)
        {
            printf("Make sure your password has a lower and upper case, it has a number and a simbol (e.g !)\n");
            return 2;
        }
        return 0;
    }
}
