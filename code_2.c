#include <stdio.h>
int main()
{
    int asc = 65;
    char i, j, n = 10;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c", asc);
            
        }
        asc++;
        printf("\n");
    }
    return 0;
}
