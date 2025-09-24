#include <stdio.h>
int main()
{
    int nombre;
    printf("entre the number ");
    scanf("%d",&nombre);

    switch (nombre)
    {
        case 90 ... 100:
            printf("a");
            break;
        case 80 ... 89:
            printf("B");
            break;
        case 70 ... 79:
            printf("C");
            break;
        case 60 ... 69:
            printf("D");
            break;
        case 0 ... 59:
            printf("F");
            break;
    }

    return 0;
}