#include <stdio.h>
int main()
{
    int y, m, j;
    int y2, m2, j2;
    printf("entre the date \n");
    scanf("%d/%d/%d", &m, &j, &y);
    printf("enter second day\n");
    scanf("%d/%d/%d", &m2, &j2, &y2);
    printf("%d %d %d %d %d %d\n", y, m, j, y2, m2, j2);
    if (y < y2)
    {

        printf("%d %d %d  plutot que %d %d %d\n", y, m, j, y2, m2, j2);
    }
    else if (y > y2)
    {
        printf("%d %d %d plus bas %d %d %d\n", y2, m2, j2, y, m, j);
    }

    else
    {
        if (m < m2)
        {

            printf("%d %d %d  plutot que %d %d %d\n", y, m, j, y2, m2, j2);
        }
        else if (m > m2)
        {
            printf("%d %d %d  plutot bas %d %d %d\n", y2, m2, j2, y, m, j);
        }
        else
        {
            if (j < j2)
            {
                printf("%d %d %d  plutot que %d %d %d\n", y, m, j, y2, m2, j2);
            }
            else if (j > j2)
            {
                printf("%d %d %d  plutot bas %d %d %d\n", y2, m2, j2, y, m, j);
            }
            else
            {
            }
            printf("%d %d %d et %d %d %d sont egaux\n", y2, m2, j2, y, m, j );
        }
    }

        return 0;
    }