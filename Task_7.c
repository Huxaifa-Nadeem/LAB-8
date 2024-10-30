#include <stdio.h>

int main()
{
    char grid[105][105] = {};
    int i = 4, j = 0;
    int up = 1;
    int jump = 1;
    int count = 0;

    
    while (count != 3)
    {
        
        grid[i][j] = '*';

        if (up)
        {
            i--;
            j += jump;
            jump++;
        }
        else
        {
            i++;
            j += jump;
            jump--;
        }
        if (i == 0 && up == 1)
        {
            up = 0;
            jump--;
        }
        else if (i == 4 && up == 0)
        {
            jump = 1;
            up = 1;
            count++;
            if (count != 0)
            {
                grid[i][j] = '*';
                j += 2;
                if (count != 3)
                    grid[i][j] = '*';
            }
        }
    }

    printf("Pattern:\n");
    int i2 = 0;
    while (i2 <= 4)
    {
        int j2 = 0;
        while (j2 < 105)
        {
            if (grid[i2][j2] == '*')
            {
                printf("%c", grid[i2][j2]);
            }
            else
            {
                printf(" ");
            }
            j2++;
        }
        printf("\n");
        i2++;
    }
}
