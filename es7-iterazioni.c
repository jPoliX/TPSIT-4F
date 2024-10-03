/*Dato N un numero intero positivo maggiore di 1, generare e visualizzare
il numero precedente. */

#include <stdio.h>

int main()
{
    int N;
    do
    {
        printf("inserisci N: ");
        scanf("%d", &N);
    } while (N < 1);

    printf("Numero precedente: %d\n", N - 1);

    return 0;
}
