/*Dato N un numero intero positivo, calcolare e visualizzare la
somma dei primi N numeri pari. */

#include <stdio.h>

int main()
{
    int N = 0, somma = 0;
    do
    {
        printf("inserisci N: ");
        scanf("%d", &N);
    } while (N < 0);
    for (int i = 0; i <= N; i += 2)
    {
        somma += i;
    }
    printf("somma: %d\n", somma);
    return 0;
}
