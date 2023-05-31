#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
// Debug Code   
//    printf("%d\n", score1);
//    printf("%d\n", score2);

    if(score1 > score2)
        printf("Player 1 Winzz!!\n");
    else if(score1 < score2)
        printf("Player 2 Winzz!!\n");
    else
        printf("TIE BRAH!\n");
    return(0);    
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    int convertLower =  32;
    int length = strlen(word);
    int score = 0;

    for(int i = 0; i < length; i++)
    {
        if((int)word[i] >= 65 && (int)word[i] <= 122)
            {
                if(isupper(word[i]))
                    word[i] +=convertLower;
                word[i] -= 97;
                score += POINTS[word[i]];
            }
    }
    return(score);

/*
    PSUEDOCODE------------------------------------------------------
    make sure its a letter
        if it is then isupper it
            if yes, lower it,
                then take the int -97 to get 0 for a 1 for b, etc, 
                    plug that number into the array to get score 
                        increment int score 
    ----------------------------------------------------------------
*/
}
