#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    int height = 0;
    int hash = 1;

    //Get Height
    while(height <= 0 || height >= 9)
        height = get_int("Height: ");
    printf("Height input : %d\n", height);

    //While loop for printing spaces
    while(height > 0)
    {
        for(int i = 1; i < height; i++)
        {
            printf(".");
        }
        for(int j = 0; j < hash; j++)
        {
            printf("#");
        }
        printf("\n");
        hash++;
        height--;
    }

    return(0);
}