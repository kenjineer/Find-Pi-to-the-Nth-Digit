#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <float.h>

int main(void)
{
    double pi = 4.0 * atan(1.0);
    int place;
    bool limit = true;

    while (limit)
    {
        printf("Enter how many decimal places of Pi to be displayed [LIMIT 15]: ");
        scanf("%i", &place);

        if (place < 16 && place >= 0)
            limit = false;
        else
        {
            printf("Decimal place out of bounds! Please enter a valid value.\n");
        }
    }
    printf("Pi in %i decimal places is: %.*f", place, place, pi);
}