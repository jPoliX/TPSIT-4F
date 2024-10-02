
#include <stdio.h>

int main()
{
    int N = 0;
    do
    {
        printf("inserisci N: ");
        scanf("%d", &N);
    } while (N < 0);
    printf("numero successivo: %d\n", N + 1);
    return 0;
}
