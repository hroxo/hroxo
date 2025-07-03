#include <stdio.h>
#include <string.h>

int main ()
{
    char agree[10];
    while (1)
    {
        printf ("Do you agree (yes or no)? ");
        scanf("%9s", agree);

        if (strcmp(agree, "yes") == 0)
        {
            printf("User agrees!\n");
            break;
        }
        else if (strcmp(agree, "no") == 0)
        {
            printf("User disagrees!\n");
            break;
        }
        else
        {
            printf("Error, try again.\n");
        }

    }
    return 0;
}
