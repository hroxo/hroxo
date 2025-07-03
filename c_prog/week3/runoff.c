#include <stdio.h>
#include <string.h>
#include <cs50.h>
#define MAX 9

typedef struct
{
    char *name;
    int vote;
}
candidate;

int candidate_count;

candidate candidates[MAX];

int votes (char *name, int n);

void print_winner(void);

int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        printf("Invalid input please use ./runoff [Candidate 1] [Candidate 2] ... \n");
        return 1;
    }
    candidate_count = argc - 1;
    if(candidate_count > MAX)
    {
        printf("Input invalid.\nPlease go up to 9 Candidates only!\n");
        return 2;
    }
    for(int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].vote = 0;
    }

    int n_votes;
    n_votes = get_int("Number of votes: \n");

    for(int i = 0; i < n_votes; i++)
    {
        for(int j = 1; j < 4; j++ )
        {
            char *name = get_string("Rank %i: ", j);

            if(votes(name, j) == 0)
            {
                printf("Invalid vote!\nVote only in possible candidates\n");
                return 3;
            }
        }
        printf("\n");

    }
    print_winner();
}

int votes (char *name, int i)
{
    for(int n = 0; n < candidate_count; n++)
    {
        if(strcmp(name, candidates[n].name) == 0)
        {
            if (i == 1)
            {
                candidates[n].vote = candidates[n].vote + 3;
                return 1;
            }
            else if (i == 2)
            {
                candidates[n].vote = candidates[n].vote + 2;
                return 1;
            }
            else
            {
                candidates[n].vote++;
                return 1;
            }
        }
    }
    return 0;
}


void print_winner(void)
{
    int max_count = 0;
    for(int i = 0; i < candidate_count; i++)
    {
        if(candidates[i].vote > max_count)
        {
           max_count = candidates[i].vote;
        }
    }

    for(int i = 0; i < candidate_count; i++)
    {
        if(candidates[i].vote == max_count)
        {
            printf("The winner is %s\n", candidates[i].name);
        }
    }
}
