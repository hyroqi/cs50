#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start = 0;
    while(start < 9)
        start = get_int("Start Size: ");
//    printf("Start = %d\n", start);

    // TODO: Prompt for end size
    int end = 0;
    while(end < start)
        end = get_int("End Size: ");
//    printf("End = %d\n", end);

    // TODO: Calculate number of years until we reach threshold
    int plus = 0;
    int minus = 0;
    int total = start;
    int years = 0;

    while(end > total)
    {
        plus = total / 3;
        minus = total / 4;
        total = total + plus - minus;
        years++;
    }

    // TODO: Print number of years
    printf("Years: %d\n", years);
    return(0);
}
