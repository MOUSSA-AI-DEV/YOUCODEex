#include <stdio.h>
int main()
{
    int n, caree;
    printf("enter the numbetr\n");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        caree = i * i;
        if (caree < n)
        {
            if (caree % 2 == 0)
            {
                printf("number is %d ", caree);
            }
        }
    }

        printf("%d",n);
    return 0;
}